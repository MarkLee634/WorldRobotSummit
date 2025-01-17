#ifndef RB_SHARED_MEMORY_H
#define RB_SHARED_MEMORY_H

#define RBCORE_SHM_NAME_REFERENCE       "RBCORE_SHARED_MEMORY_REFERENCE"
#define RBCORE_SHM_NAME_SENSOR          "RBCORE_SHARED_MEMORY_SENSOR"
#define RBCORE_SHM_NAME_COMMAND         "RBCORE_SHARED_MEMORY_COMMAND"

#define MAX_JOINT   4
#define MAX_MC      2
#define MAX_FT      1

#define MAX_MANUAL_CAN          30
#define MAX_COMMAND_DATA        20

#define MOTOR_1CH               1
#define MOTOR_2CH               2


#define COMMAND_CANID           0x01
#define SENSOR_REQUEST_CANID    0x03    //0x02
#define RT_TIMER_PERIOD_MS      5

#define RBCORE_PODO_NO          0

#define ENABLE					1
#define DISABLE					0

#define RBCORE_PI               3.141592f


typedef enum{
    MANUALCAN_NEW = 0,
    MANUALCAN_EMPTY,
    MANUALCAN_WRITING
} MANUALCAN_STATUS;
typedef	struct _MANUAL_CAN_{
    unsigned char		channel;
    unsigned int		id;
    unsigned char		data[8];
    unsigned char		dlc;
    MANUALCAN_STATUS	status;
} MANUAL_CAN;


typedef union{
    struct{
        unsigned    HIP:1;	 	// Open loop(PWM) Control mode
        unsigned    RUN:1;		// Control ON
        unsigned    MOD:1;		// Control mode
        unsigned    LIM:1;		// Limit sensor
        unsigned    HME:4;		// Limit Sensor mode during Homing

        unsigned    JAM:1;		// JAM error
        unsigned    PWM:1;		// PWM saturation
        unsigned    BIG:1;		// Big Position error
        unsigned    INP:1;              // Big Input error
        unsigned    FLT:1;		// FET Driver Fault 1= Fault
        unsigned    ENC:1;              // encoder fail
        unsigned    CUR:1;		// big current difference <<== used for CAN connection check
        unsigned    TMP:1;		// Temperature warning

        unsigned    PS1:1;		// Position Limit 1
        unsigned    PS2:1;		// Position Limit 2
        unsigned    SWM:1;		// switching mode (1:complementary, 0:non-complementary)
        unsigned    GOV:1;		// gain override
        unsigned    FRC:1;		// friction compensation
        unsigned    REF:1;		// reference mode (1:incremental, 0:absolute)
        unsigned    CAN:1;		// CAN has been recovered

        unsigned    RPL:1;      // reply ok
    }b;
    unsigned char B[3];
}mSTAT_hubo;

typedef struct _ENCODER_SENSOR_
{
    int     BoardConnection;
    float   CurrentReference;
    float   CurrentPosition;
    float   CurrentVelocity;
}ENCODER_SENSOR;
enum
{
    JOY_CONNECT = 1,
    JOY_OFF,
    JOY_ON,
    JOY_START,
    JOY_STOP
};

enum
{
    OMNI_NOT_SET = -1,
    OMNI_BREAK,
    OMNI_JOY_ON,
    OMNI_VEL_ON,
    OMNI_MOVING,
    OMNI_MOVE_DONE
};
typedef struct _FT_SENSOR_
{
    int     BoardConnection;
    float   Mx;
    float   My;
    float   Mz;
    float   Fx;
    float   Fy;
    float   Fz;
    float   RollVel;
    float   PitchVel;
    float   Roll;
    float   Pitch;
}FT_SENSOR;

//typedef struct _JOYSTICK_
//{

//};

typedef struct _COMMAND_STRUCT_
{
    int     USER_COMMAND;
    char    USER_PARA_CHAR[MAX_COMMAND_DATA];
    int	    USER_PARA_INT[MAX_COMMAND_DATA];
    float   USER_PARA_FLOAT[MAX_COMMAND_DATA];
    double  USER_PARA_DOUBLE[MAX_COMMAND_DATA];
} COMMAND_STRUCT, *pCOMMAND_STRUCT;

typedef struct _USER_COMMAND_
{
    int             COMMAND_TARGET;
    COMMAND_STRUCT  COMMAND_DATA;
} USER_COMMAND, *pUSER_COMMAND;



//======================================
// Sensor Shared Memory <Read Only>
typedef struct _RBCORE_SHM_SENSOR_
{
    mSTAT_hubo      MCStatus[MAX_MC][MOTOR_2CH];
    float           MCTemperature[MAX_MC];
    float           MotorTemperature[MAX_MC][MOTOR_2CH];

    ENCODER_SENSOR  ENCODER[MAX_MC][MOTOR_2CH];
    FT_SENSOR       FT[MAX_FT];

    int             CAN_Enabled;
    int             REF_Enabled;
    int             SEN_Enabled;
    int             ENC_Enabled;

    //Joystick
    int             JOY_Enabled;
    int            JOY_LJOG_UD;
    int            JOY_LJOG_RL;
    int            JOY_RJOG_RL;

    int             WHEEL_STATE;
}RBCORE_SHM_SENSOR, *pRBCORE_SHM_SENSOR;
//======================================

//======================================
// Reference Shared Memory <Write Only>
typedef struct _RBCORE_SHM_REFERENCE_
{
    float           JointReference[MAX_MC][MOTOR_2CH];
    MANUAL_CAN		ManualCAN[MAX_MANUAL_CAN];
}RBCORE_SHM_REFERENCE, *pRBCORE_SHM_REFERENCE;
//======================================

//======================================
// Reference Shared Memory <Read Write>
typedef struct _RBCORE_SHM_COMMAND_
{
    int             SYNC_SIGNAL;
    int             ACK_SIGNAL[MAX_MC][MOTOR_2CH];

    COMMAND_STRUCT  COMMAND;
    int             CommandAccept;
    long            ErrorInform2GUI;

    //Omnimove goal
    double          omni_xm;
    double          omni_ym;
    double          omni_yawdeg;
    double          omni_sec;
    double          max_ms;

    //Omniwheel Velmode
    double          vel_x;
    double          vel_y;
    double          vel_r;

    MANUAL_CAN      ManualCAN[MAX_MANUAL_CAN];
} RBCORE_SHM_COMMAND, *pRBCORE_SHM_COMMAND;
//======================================


typedef enum _COMMAND_SET_{
    NO_ACT = 0,
    // For process handle
    DAEMON_PROCESS_CREATE,
    DAEMON_PROCESS_KILL,
    // For initialize
    DAEMON_INIT_CHECK_DEVICE,
    DAEMON_INIT_FIND_HOME,
    DAEMON_INIT_FET_ONOFF,
    DAEMON_INIT_CONTROL_ONOFF,
    DAEMON_INIT_SET_FINGER_MODIFIER,
    // For attribute
    DAEMON_ATTR_SWITCHING_MODE,
    DAEMON_ATTR_FRICTION_COMPENSATION,
    DAEMON_ATTR_CONTROL_MODE,
    // For sensor
    DAEMON_SENSOR_ENCODER_RESET,
    DAEMON_SENSOR_ENCODER_ONOFF,
    DAEMON_SENSOR_SENSOR_ONOFF,
    DAEMON_SENSOR_FT_NULL,
    // For motion
    DAEMON_MOTION_REF_ONOFF,
    DAEMON_MOTION_MOVE,
    DAEMON_MOTION_GAIN_OVERRIDE,
    DAEMON_MOTION_ERROR_CLEAR,
    // For CAN
    DAEMON_CAN_ENABLE_DISABLE,
    // Motion
    OMNIWHEEL_MOVE_TO_GOAL,
    OMNIWHEEL_JOY_ON,
    OMNIWHEEL_JOY_START,
    OMNIWHEEL_JOY_MOVE,
    OMNIWHEEL_JOY_OFF,
    OMNIWHEEL_VEL_MODE_START,
    // For Debug
    DAEMON_DATA_SAVE

} COMMAND_SET;

#endif // RB_SHARED_MEMORY_H

