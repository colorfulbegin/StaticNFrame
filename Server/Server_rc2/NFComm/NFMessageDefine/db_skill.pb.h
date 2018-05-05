// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: db_skill.proto

#ifndef PROTOBUF_db_5fskill_2eproto__INCLUDED
#define PROTOBUF_db_5fskill_2eproto__INCLUDED

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
#include "skill.pb.h"
// @@protoc_insertion_point(includes)

namespace proto {
namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_db_5fskill_2eproto();
void protobuf_AssignDesc_db_5fskill_2eproto();
void protobuf_ShutdownFile_db_5fskill_2eproto();

class AllSkillInfo;

// ===================================================================

class AllSkillInfo : public ::google::protobuf::Message {
 public:
  AllSkillInfo();
  virtual ~AllSkillInfo();

  AllSkillInfo(const AllSkillInfo& from);

  inline AllSkillInfo& operator=(const AllSkillInfo& from) {
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
  static const AllSkillInfo& default_instance();

  void Swap(AllSkillInfo* other);

  // implements Message ----------------------------------------------

  AllSkillInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AllSkillInfo& from);
  void MergeFrom(const AllSkillInfo& from);
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

  // repeated .proto.message.SkillInfo skillInfo = 1;
  inline int skillinfo_size() const;
  inline void clear_skillinfo();
  static const int kSkillInfoFieldNumber = 1;
  inline const ::proto::message::SkillInfo& skillinfo(int index) const;
  inline ::proto::message::SkillInfo* mutable_skillinfo(int index);
  inline ::proto::message::SkillInfo* add_skillinfo();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::SkillInfo >&
      skillinfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::SkillInfo >*
      mutable_skillinfo();

  // @@protoc_insertion_point(class_scope:proto.message.AllSkillInfo)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto::message::SkillInfo > skillinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fskill_2eproto();
  friend void protobuf_AssignDesc_db_5fskill_2eproto();
  friend void protobuf_ShutdownFile_db_5fskill_2eproto();

  void InitAsDefaultInstance();
  static AllSkillInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// AllSkillInfo

// repeated .proto.message.SkillInfo skillInfo = 1;
inline int AllSkillInfo::skillinfo_size() const {
  return skillinfo_.size();
}
inline void AllSkillInfo::clear_skillinfo() {
  skillinfo_.Clear();
}
inline const ::proto::message::SkillInfo& AllSkillInfo::skillinfo(int index) const {
  return skillinfo_.Get(index);
}
inline ::proto::message::SkillInfo* AllSkillInfo::mutable_skillinfo(int index) {
  return skillinfo_.Mutable(index);
}
inline ::proto::message::SkillInfo* AllSkillInfo::add_skillinfo() {
  return skillinfo_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::SkillInfo >&
AllSkillInfo::skillinfo() const {
  return skillinfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::SkillInfo >*
AllSkillInfo::mutable_skillinfo() {
  return &skillinfo_;
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

#endif  // PROTOBUF_db_5fskill_2eproto__INCLUDED