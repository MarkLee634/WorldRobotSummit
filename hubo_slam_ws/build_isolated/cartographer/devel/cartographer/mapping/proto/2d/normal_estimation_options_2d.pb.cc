// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/2d/normal_estimation_options_2d.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/2d/normal_estimation_options_2d.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {
class NormalEstimationOptions2DDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<NormalEstimationOptions2D>
     _instance;
} _NormalEstimationOptions2D_default_instance_;

namespace protobuf_cartographer_2fmapping_2fproto_2f2d_2fnormal_5festimation_5foptions_5f2d_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NormalEstimationOptions2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NormalEstimationOptions2D, num_normal_samples_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NormalEstimationOptions2D, sample_radius_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(NormalEstimationOptions2D)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_NormalEstimationOptions2D_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/mapping/proto/2d/normal_estimation_options_2d.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _NormalEstimationOptions2D_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_NormalEstimationOptions2D_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n@cartographer/mapping/proto/2d/normal_e"
      "stimation_options_2d.proto\022\032cartographer"
      ".mapping.proto\"N\n\031NormalEstimationOption"
      "s2D\022\032\n\022num_normal_samples\030\001 \001(\005\022\025\n\rsampl"
      "e_radius\030\002 \001(\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 182);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/2d/normal_estimation_options_2d.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cartographer_2fmapping_2fproto_2f2d_2fnormal_5festimation_5foptions_5f2d_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NormalEstimationOptions2D::kNumNormalSamplesFieldNumber;
const int NormalEstimationOptions2D::kSampleRadiusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NormalEstimationOptions2D::NormalEstimationOptions2D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cartographer_2fmapping_2fproto_2f2d_2fnormal_5festimation_5foptions_5f2d_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.NormalEstimationOptions2D)
}
NormalEstimationOptions2D::NormalEstimationOptions2D(const NormalEstimationOptions2D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&num_normal_samples_, &from.num_normal_samples_,
    static_cast<size_t>(reinterpret_cast<char*>(&sample_radius_) -
    reinterpret_cast<char*>(&num_normal_samples_)) + sizeof(sample_radius_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.NormalEstimationOptions2D)
}

void NormalEstimationOptions2D::SharedCtor() {
  ::memset(&num_normal_samples_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sample_radius_) -
      reinterpret_cast<char*>(&num_normal_samples_)) + sizeof(sample_radius_));
  _cached_size_ = 0;
}

NormalEstimationOptions2D::~NormalEstimationOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.NormalEstimationOptions2D)
  SharedDtor();
}

void NormalEstimationOptions2D::SharedDtor() {
}

void NormalEstimationOptions2D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NormalEstimationOptions2D::descriptor() {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fnormal_5festimation_5foptions_5f2d_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fproto_2f2d_2fnormal_5festimation_5foptions_5f2d_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const NormalEstimationOptions2D& NormalEstimationOptions2D::default_instance() {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fnormal_5festimation_5foptions_5f2d_2eproto::InitDefaults();
  return *internal_default_instance();
}

NormalEstimationOptions2D* NormalEstimationOptions2D::New(::google::protobuf::Arena* arena) const {
  NormalEstimationOptions2D* n = new NormalEstimationOptions2D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void NormalEstimationOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&num_normal_samples_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sample_radius_) -
      reinterpret_cast<char*>(&num_normal_samples_)) + sizeof(sample_radius_));
  _internal_metadata_.Clear();
}

bool NormalEstimationOptions2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 num_normal_samples = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_normal_samples_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float sample_radius = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sample_radius_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.NormalEstimationOptions2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.NormalEstimationOptions2D)
  return false;
#undef DO_
}

void NormalEstimationOptions2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 num_normal_samples = 1;
  if (this->num_normal_samples() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->num_normal_samples(), output);
  }

  // float sample_radius = 2;
  if (this->sample_radius() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->sample_radius(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.NormalEstimationOptions2D)
}

::google::protobuf::uint8* NormalEstimationOptions2D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 num_normal_samples = 1;
  if (this->num_normal_samples() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->num_normal_samples(), target);
  }

  // float sample_radius = 2;
  if (this->sample_radius() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->sample_radius(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.NormalEstimationOptions2D)
  return target;
}

size_t NormalEstimationOptions2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 num_normal_samples = 1;
  if (this->num_normal_samples() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_normal_samples());
  }

  // float sample_radius = 2;
  if (this->sample_radius() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NormalEstimationOptions2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  const NormalEstimationOptions2D* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const NormalEstimationOptions2D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.NormalEstimationOptions2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.NormalEstimationOptions2D)
    MergeFrom(*source);
  }
}

void NormalEstimationOptions2D::MergeFrom(const NormalEstimationOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.num_normal_samples() != 0) {
    set_num_normal_samples(from.num_normal_samples());
  }
  if (from.sample_radius() != 0) {
    set_sample_radius(from.sample_radius());
  }
}

void NormalEstimationOptions2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NormalEstimationOptions2D::CopyFrom(const NormalEstimationOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.NormalEstimationOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NormalEstimationOptions2D::IsInitialized() const {
  return true;
}

void NormalEstimationOptions2D::Swap(NormalEstimationOptions2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NormalEstimationOptions2D::InternalSwap(NormalEstimationOptions2D* other) {
  using std::swap;
  swap(num_normal_samples_, other->num_normal_samples_);
  swap(sample_radius_, other->sample_radius_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata NormalEstimationOptions2D::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fnormal_5festimation_5foptions_5f2d_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fproto_2f2d_2fnormal_5festimation_5foptions_5f2d_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// NormalEstimationOptions2D

// int32 num_normal_samples = 1;
void NormalEstimationOptions2D::clear_num_normal_samples() {
  num_normal_samples_ = 0;
}
::google::protobuf::int32 NormalEstimationOptions2D::num_normal_samples() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.NormalEstimationOptions2D.num_normal_samples)
  return num_normal_samples_;
}
void NormalEstimationOptions2D::set_num_normal_samples(::google::protobuf::int32 value) {
  
  num_normal_samples_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.NormalEstimationOptions2D.num_normal_samples)
}

// float sample_radius = 2;
void NormalEstimationOptions2D::clear_sample_radius() {
  sample_radius_ = 0;
}
float NormalEstimationOptions2D::sample_radius() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.NormalEstimationOptions2D.sample_radius)
  return sample_radius_;
}
void NormalEstimationOptions2D::set_sample_radius(float value) {
  
  sample_radius_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.NormalEstimationOptions2D.sample_radius)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
