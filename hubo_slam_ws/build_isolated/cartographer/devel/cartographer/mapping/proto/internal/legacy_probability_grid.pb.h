// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/internal/legacy_probability_grid.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2finternal_2flegacy_5fprobability_5fgrid_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2finternal_2flegacy_5fprobability_5fgrid_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/proto/2d/map_limits.pb.h"
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace proto {
class LegacyProbabilityGrid;
class LegacyProbabilityGridDefaultTypeInternal;
extern LegacyProbabilityGridDefaultTypeInternal _LegacyProbabilityGrid_default_instance_;
class LegacyProbabilityGrid_CellBox;
class LegacyProbabilityGrid_CellBoxDefaultTypeInternal;
extern LegacyProbabilityGrid_CellBoxDefaultTypeInternal _LegacyProbabilityGrid_CellBox_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

namespace cartographer {
namespace mapping {
namespace proto {

namespace protobuf_cartographer_2fmapping_2fproto_2finternal_2flegacy_5fprobability_5fgrid_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cartographer_2fmapping_2fproto_2finternal_2flegacy_5fprobability_5fgrid_2eproto

// ===================================================================

class LegacyProbabilityGrid_CellBox : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox) */ {
 public:
  LegacyProbabilityGrid_CellBox();
  virtual ~LegacyProbabilityGrid_CellBox();

  LegacyProbabilityGrid_CellBox(const LegacyProbabilityGrid_CellBox& from);

  inline LegacyProbabilityGrid_CellBox& operator=(const LegacyProbabilityGrid_CellBox& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LegacyProbabilityGrid_CellBox(LegacyProbabilityGrid_CellBox&& from) noexcept
    : LegacyProbabilityGrid_CellBox() {
    *this = ::std::move(from);
  }

  inline LegacyProbabilityGrid_CellBox& operator=(LegacyProbabilityGrid_CellBox&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LegacyProbabilityGrid_CellBox& default_instance();

  static inline const LegacyProbabilityGrid_CellBox* internal_default_instance() {
    return reinterpret_cast<const LegacyProbabilityGrid_CellBox*>(
               &_LegacyProbabilityGrid_CellBox_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LegacyProbabilityGrid_CellBox* other);
  friend void swap(LegacyProbabilityGrid_CellBox& a, LegacyProbabilityGrid_CellBox& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LegacyProbabilityGrid_CellBox* New() const PROTOBUF_FINAL { return New(NULL); }

  LegacyProbabilityGrid_CellBox* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LegacyProbabilityGrid_CellBox& from);
  void MergeFrom(const LegacyProbabilityGrid_CellBox& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LegacyProbabilityGrid_CellBox* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 max_x = 1;
  void clear_max_x();
  static const int kMaxXFieldNumber = 1;
  ::google::protobuf::int32 max_x() const;
  void set_max_x(::google::protobuf::int32 value);

  // int32 max_y = 2;
  void clear_max_y();
  static const int kMaxYFieldNumber = 2;
  ::google::protobuf::int32 max_y() const;
  void set_max_y(::google::protobuf::int32 value);

  // int32 min_x = 3;
  void clear_min_x();
  static const int kMinXFieldNumber = 3;
  ::google::protobuf::int32 min_x() const;
  void set_min_x(::google::protobuf::int32 value);

  // int32 min_y = 4;
  void clear_min_y();
  static const int kMinYFieldNumber = 4;
  ::google::protobuf::int32 min_y() const;
  void set_min_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 max_x_;
  ::google::protobuf::int32 max_y_;
  ::google::protobuf::int32 min_x_;
  ::google::protobuf::int32 min_y_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2finternal_2flegacy_5fprobability_5fgrid_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class LegacyProbabilityGrid : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.LegacyProbabilityGrid) */ {
 public:
  LegacyProbabilityGrid();
  virtual ~LegacyProbabilityGrid();

  LegacyProbabilityGrid(const LegacyProbabilityGrid& from);

  inline LegacyProbabilityGrid& operator=(const LegacyProbabilityGrid& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LegacyProbabilityGrid(LegacyProbabilityGrid&& from) noexcept
    : LegacyProbabilityGrid() {
    *this = ::std::move(from);
  }

  inline LegacyProbabilityGrid& operator=(LegacyProbabilityGrid&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LegacyProbabilityGrid& default_instance();

  static inline const LegacyProbabilityGrid* internal_default_instance() {
    return reinterpret_cast<const LegacyProbabilityGrid*>(
               &_LegacyProbabilityGrid_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(LegacyProbabilityGrid* other);
  friend void swap(LegacyProbabilityGrid& a, LegacyProbabilityGrid& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LegacyProbabilityGrid* New() const PROTOBUF_FINAL { return New(NULL); }

  LegacyProbabilityGrid* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LegacyProbabilityGrid& from);
  void MergeFrom(const LegacyProbabilityGrid& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LegacyProbabilityGrid* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef LegacyProbabilityGrid_CellBox CellBox;

  // accessors -------------------------------------------------------

  // repeated int32 cells = 2;
  int cells_size() const;
  void clear_cells();
  static const int kCellsFieldNumber = 2;
  ::google::protobuf::int32 cells(int index) const;
  void set_cells(int index, ::google::protobuf::int32 value);
  void add_cells(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      cells() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_cells();

  // .cartographer.mapping.proto.MapLimits limits = 1;
  bool has_limits() const;
  void clear_limits();
  static const int kLimitsFieldNumber = 1;
  const ::cartographer::mapping::proto::MapLimits& limits() const;
  ::cartographer::mapping::proto::MapLimits* mutable_limits();
  ::cartographer::mapping::proto::MapLimits* release_limits();
  void set_allocated_limits(::cartographer::mapping::proto::MapLimits* limits);

  // .cartographer.mapping.proto.LegacyProbabilityGrid.CellBox known_cells_box = 8;
  bool has_known_cells_box() const;
  void clear_known_cells_box();
  static const int kKnownCellsBoxFieldNumber = 8;
  const ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox& known_cells_box() const;
  ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* mutable_known_cells_box();
  ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* release_known_cells_box();
  void set_allocated_known_cells_box(::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* known_cells_box);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.LegacyProbabilityGrid)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > cells_;
  mutable int _cells_cached_byte_size_;
  ::cartographer::mapping::proto::MapLimits* limits_;
  ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* known_cells_box_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2finternal_2flegacy_5fprobability_5fgrid_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LegacyProbabilityGrid_CellBox

// int32 max_x = 1;
inline void LegacyProbabilityGrid_CellBox::clear_max_x() {
  max_x_ = 0;
}
inline ::google::protobuf::int32 LegacyProbabilityGrid_CellBox::max_x() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox.max_x)
  return max_x_;
}
inline void LegacyProbabilityGrid_CellBox::set_max_x(::google::protobuf::int32 value) {
  
  max_x_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox.max_x)
}

// int32 max_y = 2;
inline void LegacyProbabilityGrid_CellBox::clear_max_y() {
  max_y_ = 0;
}
inline ::google::protobuf::int32 LegacyProbabilityGrid_CellBox::max_y() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox.max_y)
  return max_y_;
}
inline void LegacyProbabilityGrid_CellBox::set_max_y(::google::protobuf::int32 value) {
  
  max_y_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox.max_y)
}

// int32 min_x = 3;
inline void LegacyProbabilityGrid_CellBox::clear_min_x() {
  min_x_ = 0;
}
inline ::google::protobuf::int32 LegacyProbabilityGrid_CellBox::min_x() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox.min_x)
  return min_x_;
}
inline void LegacyProbabilityGrid_CellBox::set_min_x(::google::protobuf::int32 value) {
  
  min_x_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox.min_x)
}

// int32 min_y = 4;
inline void LegacyProbabilityGrid_CellBox::clear_min_y() {
  min_y_ = 0;
}
inline ::google::protobuf::int32 LegacyProbabilityGrid_CellBox::min_y() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox.min_y)
  return min_y_;
}
inline void LegacyProbabilityGrid_CellBox::set_min_y(::google::protobuf::int32 value) {
  
  min_y_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LegacyProbabilityGrid.CellBox.min_y)
}

// -------------------------------------------------------------------

// LegacyProbabilityGrid

// .cartographer.mapping.proto.MapLimits limits = 1;
inline bool LegacyProbabilityGrid::has_limits() const {
  return this != internal_default_instance() && limits_ != NULL;
}
inline void LegacyProbabilityGrid::clear_limits() {
  if (GetArenaNoVirtual() == NULL && limits_ != NULL) delete limits_;
  limits_ = NULL;
}
inline const ::cartographer::mapping::proto::MapLimits& LegacyProbabilityGrid::limits() const {
  const ::cartographer::mapping::proto::MapLimits* p = limits_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LegacyProbabilityGrid.limits)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::MapLimits*>(
      &::cartographer::mapping::proto::_MapLimits_default_instance_);
}
inline ::cartographer::mapping::proto::MapLimits* LegacyProbabilityGrid::mutable_limits() {
  
  if (limits_ == NULL) {
    limits_ = new ::cartographer::mapping::proto::MapLimits;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LegacyProbabilityGrid.limits)
  return limits_;
}
inline ::cartographer::mapping::proto::MapLimits* LegacyProbabilityGrid::release_limits() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LegacyProbabilityGrid.limits)
  
  ::cartographer::mapping::proto::MapLimits* temp = limits_;
  limits_ = NULL;
  return temp;
}
inline void LegacyProbabilityGrid::set_allocated_limits(::cartographer::mapping::proto::MapLimits* limits) {
  delete limits_;
  limits_ = limits;
  if (limits) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LegacyProbabilityGrid.limits)
}

// repeated int32 cells = 2;
inline int LegacyProbabilityGrid::cells_size() const {
  return cells_.size();
}
inline void LegacyProbabilityGrid::clear_cells() {
  cells_.Clear();
}
inline ::google::protobuf::int32 LegacyProbabilityGrid::cells(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LegacyProbabilityGrid.cells)
  return cells_.Get(index);
}
inline void LegacyProbabilityGrid::set_cells(int index, ::google::protobuf::int32 value) {
  cells_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.LegacyProbabilityGrid.cells)
}
inline void LegacyProbabilityGrid::add_cells(::google::protobuf::int32 value) {
  cells_.Add(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.LegacyProbabilityGrid.cells)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
LegacyProbabilityGrid::cells() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.LegacyProbabilityGrid.cells)
  return cells_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
LegacyProbabilityGrid::mutable_cells() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.LegacyProbabilityGrid.cells)
  return &cells_;
}

// .cartographer.mapping.proto.LegacyProbabilityGrid.CellBox known_cells_box = 8;
inline bool LegacyProbabilityGrid::has_known_cells_box() const {
  return this != internal_default_instance() && known_cells_box_ != NULL;
}
inline void LegacyProbabilityGrid::clear_known_cells_box() {
  if (GetArenaNoVirtual() == NULL && known_cells_box_ != NULL) delete known_cells_box_;
  known_cells_box_ = NULL;
}
inline const ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox& LegacyProbabilityGrid::known_cells_box() const {
  const ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* p = known_cells_box_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.LegacyProbabilityGrid.known_cells_box)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox*>(
      &::cartographer::mapping::proto::_LegacyProbabilityGrid_CellBox_default_instance_);
}
inline ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* LegacyProbabilityGrid::mutable_known_cells_box() {
  
  if (known_cells_box_ == NULL) {
    known_cells_box_ = new ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.LegacyProbabilityGrid.known_cells_box)
  return known_cells_box_;
}
inline ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* LegacyProbabilityGrid::release_known_cells_box() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.LegacyProbabilityGrid.known_cells_box)
  
  ::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* temp = known_cells_box_;
  known_cells_box_ = NULL;
  return temp;
}
inline void LegacyProbabilityGrid::set_allocated_known_cells_box(::cartographer::mapping::proto::LegacyProbabilityGrid_CellBox* known_cells_box) {
  delete known_cells_box_;
  known_cells_box_ = known_cells_box;
  if (known_cells_box) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.LegacyProbabilityGrid.known_cells_box)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2finternal_2flegacy_5fprobability_5fgrid_2eproto__INCLUDED
