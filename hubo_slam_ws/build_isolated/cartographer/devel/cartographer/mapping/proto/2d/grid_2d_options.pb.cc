// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/2d/grid_2d_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/2d/grid_2d_options.pb.h"

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
class GridOptions2DDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<GridOptions2D>
     _instance;
} _GridOptions2D_default_instance_;

namespace protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GridOptions2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GridOptions2D, grid_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GridOptions2D, resolution_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(GridOptions2D)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_GridOptions2D_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/mapping/proto/2d/grid_2d_options.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
  _GridOptions2D_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_GridOptions2D_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n3cartographer/mapping/proto/2d/grid_2d_"
      "options.proto\022\032cartographer.mapping.prot"
      "o\"\250\001\n\rGridOptions2D\022E\n\tgrid_type\030\001 \001(\01622"
      ".cartographer.mapping.proto.GridOptions2"
      "D.GridType\022\022\n\nresolution\030\002 \001(\002\"<\n\010GridTy"
      "pe\022\020\n\014INVALID_GRID\020\000\022\024\n\020PROBABILITY_GRID"
      "\020\001\022\010\n\004TSDF\020\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 260);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/2d/grid_2d_options.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto

const ::google::protobuf::EnumDescriptor* GridOptions2D_GridType_descriptor() {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::file_level_enum_descriptors[0];
}
bool GridOptions2D_GridType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const GridOptions2D_GridType GridOptions2D::INVALID_GRID;
const GridOptions2D_GridType GridOptions2D::PROBABILITY_GRID;
const GridOptions2D_GridType GridOptions2D::TSDF;
const GridOptions2D_GridType GridOptions2D::GridType_MIN;
const GridOptions2D_GridType GridOptions2D::GridType_MAX;
const int GridOptions2D::GridType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GridOptions2D::kGridTypeFieldNumber;
const int GridOptions2D::kResolutionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GridOptions2D::GridOptions2D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.GridOptions2D)
}
GridOptions2D::GridOptions2D(const GridOptions2D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&grid_type_, &from.grid_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&resolution_) -
    reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.GridOptions2D)
}

void GridOptions2D::SharedCtor() {
  ::memset(&grid_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&resolution_) -
      reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
  _cached_size_ = 0;
}

GridOptions2D::~GridOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.GridOptions2D)
  SharedDtor();
}

void GridOptions2D::SharedDtor() {
}

void GridOptions2D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GridOptions2D::descriptor() {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GridOptions2D& GridOptions2D::default_instance() {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::InitDefaults();
  return *internal_default_instance();
}

GridOptions2D* GridOptions2D::New(::google::protobuf::Arena* arena) const {
  GridOptions2D* n = new GridOptions2D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GridOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.GridOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&grid_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&resolution_) -
      reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
  _internal_metadata_.Clear();
}

bool GridOptions2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.GridOptions2D)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_grid_type(static_cast< ::cartographer::mapping::proto::GridOptions2D_GridType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float resolution = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &resolution_)));
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
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.GridOptions2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.GridOptions2D)
  return false;
#undef DO_
}

void GridOptions2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.GridOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  if (this->grid_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->grid_type(), output);
  }

  // float resolution = 2;
  if (this->resolution() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->resolution(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.GridOptions2D)
}

::google::protobuf::uint8* GridOptions2D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.GridOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  if (this->grid_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->grid_type(), target);
  }

  // float resolution = 2;
  if (this->resolution() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->resolution(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.GridOptions2D)
  return target;
}

size_t GridOptions2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.GridOptions2D)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  if (this->grid_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->grid_type());
  }

  // float resolution = 2;
  if (this->resolution() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GridOptions2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.GridOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  const GridOptions2D* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GridOptions2D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.GridOptions2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.GridOptions2D)
    MergeFrom(*source);
  }
}

void GridOptions2D::MergeFrom(const GridOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.GridOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.grid_type() != 0) {
    set_grid_type(from.grid_type());
  }
  if (from.resolution() != 0) {
    set_resolution(from.resolution());
  }
}

void GridOptions2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.GridOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GridOptions2D::CopyFrom(const GridOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.GridOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GridOptions2D::IsInitialized() const {
  return true;
}

void GridOptions2D::Swap(GridOptions2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GridOptions2D::InternalSwap(GridOptions2D* other) {
  using std::swap;
  swap(grid_type_, other->grid_type_);
  swap(resolution_, other->resolution_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GridOptions2D::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GridOptions2D

// .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
void GridOptions2D::clear_grid_type() {
  grid_type_ = 0;
}
::cartographer::mapping::proto::GridOptions2D_GridType GridOptions2D::grid_type() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.GridOptions2D.grid_type)
  return static_cast< ::cartographer::mapping::proto::GridOptions2D_GridType >(grid_type_);
}
void GridOptions2D::set_grid_type(::cartographer::mapping::proto::GridOptions2D_GridType value) {
  
  grid_type_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.GridOptions2D.grid_type)
}

// float resolution = 2;
void GridOptions2D::clear_resolution() {
  resolution_ = 0;
}
float GridOptions2D::resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.GridOptions2D.resolution)
  return resolution_;
}
void GridOptions2D::set_resolution(float value) {
  
  resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.GridOptions2D.resolution)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
