// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: support.proto

#ifndef PROTOBUF_support_2eproto__INCLUDED
#define PROTOBUF_support_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace proto {
namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_support_2eproto();
void protobuf_AssignDesc_support_2eproto();
void protobuf_ShutdownFile_support_2eproto();

class SupportData;
class Support_CS_QuerySupportData;
class Support_SC_UpdateSupportData;
class PointData;

// ===================================================================

class SupportData : public ::google::protobuf::Message {
 public:
  SupportData();
  virtual ~SupportData();

  SupportData(const SupportData& from);

  inline SupportData& operator=(const SupportData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SupportData& default_instance();

  void Swap(SupportData* other);

  // implements Message ----------------------------------------------

  SupportData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SupportData& from);
  void MergeFrom(const SupportData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required uint32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::uint32 type() const;
  inline void set_type(::google::protobuf::uint32 value);

  // required uint32 progress = 3;
  inline bool has_progress() const;
  inline void clear_progress();
  static const int kProgressFieldNumber = 3;
  inline ::google::protobuf::uint32 progress() const;
  inline void set_progress(::google::protobuf::uint32 value);

  // required uint32 limit = 4;
  inline bool has_limit() const;
  inline void clear_limit();
  static const int kLimitFieldNumber = 4;
  inline ::google::protobuf::uint32 limit() const;
  inline void set_limit(::google::protobuf::uint32 value);

  // optional uint32 textname = 5;
  inline bool has_textname() const;
  inline void clear_textname();
  static const int kTextnameFieldNumber = 5;
  inline ::google::protobuf::uint32 textname() const;
  inline void set_textname(::google::protobuf::uint32 value);

  // optional uint32 textdesc = 6;
  inline bool has_textdesc() const;
  inline void clear_textdesc();
  static const int kTextdescFieldNumber = 6;
  inline ::google::protobuf::uint32 textdesc() const;
  inline void set_textdesc(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto.message.SupportData)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_progress();
  inline void clear_has_progress();
  inline void set_has_limit();
  inline void clear_has_limit();
  inline void set_has_textname();
  inline void clear_has_textname();
  inline void set_has_textdesc();
  inline void clear_has_textdesc();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 type_;
  ::google::protobuf::uint32 progress_;
  ::google::protobuf::uint32 limit_;
  ::google::protobuf::uint32 textname_;
  ::google::protobuf::uint32 textdesc_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_support_2eproto();
  friend void protobuf_AssignDesc_support_2eproto();
  friend void protobuf_ShutdownFile_support_2eproto();

  void InitAsDefaultInstance();
  static SupportData* default_instance_;
};
// -------------------------------------------------------------------

class Support_CS_QuerySupportData : public ::google::protobuf::Message {
 public:
  Support_CS_QuerySupportData();
  virtual ~Support_CS_QuerySupportData();

  Support_CS_QuerySupportData(const Support_CS_QuerySupportData& from);

  inline Support_CS_QuerySupportData& operator=(const Support_CS_QuerySupportData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Support_CS_QuerySupportData& default_instance();

  void Swap(Support_CS_QuerySupportData* other);

  // implements Message ----------------------------------------------

  Support_CS_QuerySupportData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Support_CS_QuerySupportData& from);
  void MergeFrom(const Support_CS_QuerySupportData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:proto.message.Support_CS_QuerySupportData)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_support_2eproto();
  friend void protobuf_AssignDesc_support_2eproto();
  friend void protobuf_ShutdownFile_support_2eproto();

  void InitAsDefaultInstance();
  static Support_CS_QuerySupportData* default_instance_;
};
// -------------------------------------------------------------------

class Support_SC_UpdateSupportData : public ::google::protobuf::Message {
 public:
  Support_SC_UpdateSupportData();
  virtual ~Support_SC_UpdateSupportData();

  Support_SC_UpdateSupportData(const Support_SC_UpdateSupportData& from);

  inline Support_SC_UpdateSupportData& operator=(const Support_SC_UpdateSupportData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Support_SC_UpdateSupportData& default_instance();

  void Swap(Support_SC_UpdateSupportData* other);

  // implements Message ----------------------------------------------

  Support_SC_UpdateSupportData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Support_SC_UpdateSupportData& from);
  void MergeFrom(const Support_SC_UpdateSupportData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .proto.message.SupportData data = 1;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::proto::message::SupportData& data(int index) const;
  inline ::proto::message::SupportData* mutable_data(int index);
  inline ::proto::message::SupportData* add_data();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::SupportData >&
      data() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::SupportData >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:proto.message.Support_SC_UpdateSupportData)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto::message::SupportData > data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_support_2eproto();
  friend void protobuf_AssignDesc_support_2eproto();
  friend void protobuf_ShutdownFile_support_2eproto();

  void InitAsDefaultInstance();
  static Support_SC_UpdateSupportData* default_instance_;
};
// -------------------------------------------------------------------

class PointData : public ::google::protobuf::Message {
 public:
  PointData();
  virtual ~PointData();

  PointData(const PointData& from);

  inline PointData& operator=(const PointData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PointData& default_instance();

  void Swap(PointData* other);

  // implements Message ----------------------------------------------

  PointData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PointData& from);
  void MergeFrom(const PointData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required uint64 lastUpdateTick = 2;
  inline bool has_lastupdatetick() const;
  inline void clear_lastupdatetick();
  static const int kLastUpdateTickFieldNumber = 2;
  inline ::google::protobuf::uint64 lastupdatetick() const;
  inline void set_lastupdatetick(::google::protobuf::uint64 value);

  // required uint32 todatTotal = 3;
  inline bool has_todattotal() const;
  inline void clear_todattotal();
  static const int kTodatTotalFieldNumber = 3;
  inline ::google::protobuf::uint32 todattotal() const;
  inline void set_todattotal(::google::protobuf::uint32 value);

  // required uint64 beginTick = 4;
  inline bool has_begintick() const;
  inline void clear_begintick();
  static const int kBeginTickFieldNumber = 4;
  inline ::google::protobuf::uint64 begintick() const;
  inline void set_begintick(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:proto.message.PointData)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_lastupdatetick();
  inline void clear_has_lastupdatetick();
  inline void set_has_todattotal();
  inline void clear_has_todattotal();
  inline void set_has_begintick();
  inline void clear_has_begintick();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 lastupdatetick_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 todattotal_;
  ::google::protobuf::uint64 begintick_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_support_2eproto();
  friend void protobuf_AssignDesc_support_2eproto();
  friend void protobuf_ShutdownFile_support_2eproto();

  void InitAsDefaultInstance();
  static PointData* default_instance_;
};
// ===================================================================


// ===================================================================

// SupportData

// required uint32 ID = 1;
inline bool SupportData::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SupportData::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SupportData::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SupportData::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 SupportData::id() const {
  return id_;
}
inline void SupportData::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}

// required uint32 type = 2;
inline bool SupportData::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SupportData::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SupportData::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SupportData::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 SupportData::type() const {
  return type_;
}
inline void SupportData::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
}

// required uint32 progress = 3;
inline bool SupportData::has_progress() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SupportData::set_has_progress() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SupportData::clear_has_progress() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SupportData::clear_progress() {
  progress_ = 0u;
  clear_has_progress();
}
inline ::google::protobuf::uint32 SupportData::progress() const {
  return progress_;
}
inline void SupportData::set_progress(::google::protobuf::uint32 value) {
  set_has_progress();
  progress_ = value;
}

// required uint32 limit = 4;
inline bool SupportData::has_limit() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SupportData::set_has_limit() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SupportData::clear_has_limit() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SupportData::clear_limit() {
  limit_ = 0u;
  clear_has_limit();
}
inline ::google::protobuf::uint32 SupportData::limit() const {
  return limit_;
}
inline void SupportData::set_limit(::google::protobuf::uint32 value) {
  set_has_limit();
  limit_ = value;
}

// optional uint32 textname = 5;
inline bool SupportData::has_textname() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SupportData::set_has_textname() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SupportData::clear_has_textname() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SupportData::clear_textname() {
  textname_ = 0u;
  clear_has_textname();
}
inline ::google::protobuf::uint32 SupportData::textname() const {
  return textname_;
}
inline void SupportData::set_textname(::google::protobuf::uint32 value) {
  set_has_textname();
  textname_ = value;
}

// optional uint32 textdesc = 6;
inline bool SupportData::has_textdesc() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SupportData::set_has_textdesc() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SupportData::clear_has_textdesc() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SupportData::clear_textdesc() {
  textdesc_ = 0u;
  clear_has_textdesc();
}
inline ::google::protobuf::uint32 SupportData::textdesc() const {
  return textdesc_;
}
inline void SupportData::set_textdesc(::google::protobuf::uint32 value) {
  set_has_textdesc();
  textdesc_ = value;
}

// -------------------------------------------------------------------

// Support_CS_QuerySupportData

// -------------------------------------------------------------------

// Support_SC_UpdateSupportData

// repeated .proto.message.SupportData data = 1;
inline int Support_SC_UpdateSupportData::data_size() const {
  return data_.size();
}
inline void Support_SC_UpdateSupportData::clear_data() {
  data_.Clear();
}
inline const ::proto::message::SupportData& Support_SC_UpdateSupportData::data(int index) const {
  return data_.Get(index);
}
inline ::proto::message::SupportData* Support_SC_UpdateSupportData::mutable_data(int index) {
  return data_.Mutable(index);
}
inline ::proto::message::SupportData* Support_SC_UpdateSupportData::add_data() {
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::SupportData >&
Support_SC_UpdateSupportData::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::SupportData >*
Support_SC_UpdateSupportData::mutable_data() {
  return &data_;
}

// -------------------------------------------------------------------

// PointData

// required uint32 ID = 1;
inline bool PointData::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PointData::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PointData::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PointData::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 PointData::id() const {
  return id_;
}
inline void PointData::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}

// required uint64 lastUpdateTick = 2;
inline bool PointData::has_lastupdatetick() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PointData::set_has_lastupdatetick() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PointData::clear_has_lastupdatetick() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PointData::clear_lastupdatetick() {
  lastupdatetick_ = GOOGLE_ULONGLONG(0);
  clear_has_lastupdatetick();
}
inline ::google::protobuf::uint64 PointData::lastupdatetick() const {
  return lastupdatetick_;
}
inline void PointData::set_lastupdatetick(::google::protobuf::uint64 value) {
  set_has_lastupdatetick();
  lastupdatetick_ = value;
}

// required uint32 todatTotal = 3;
inline bool PointData::has_todattotal() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PointData::set_has_todattotal() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PointData::clear_has_todattotal() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PointData::clear_todattotal() {
  todattotal_ = 0u;
  clear_has_todattotal();
}
inline ::google::protobuf::uint32 PointData::todattotal() const {
  return todattotal_;
}
inline void PointData::set_todattotal(::google::protobuf::uint32 value) {
  set_has_todattotal();
  todattotal_ = value;
}

// required uint64 beginTick = 4;
inline bool PointData::has_begintick() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PointData::set_has_begintick() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PointData::clear_has_begintick() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PointData::clear_begintick() {
  begintick_ = GOOGLE_ULONGLONG(0);
  clear_has_begintick();
}
inline ::google::protobuf::uint64 PointData::begintick() const {
  return begintick_;
}
inline void PointData::set_begintick(::google::protobuf::uint64 value) {
  set_has_begintick();
  begintick_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message
}  // namespace proto

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_support_2eproto__INCLUDED
