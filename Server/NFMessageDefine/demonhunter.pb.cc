// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: demonhunter.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "demonhunter.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {
namespace message {

namespace {

const ::google::protobuf::Descriptor* DH_CS_GetReword_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DH_CS_GetReword_reflection_ = NULL;
const ::google::protobuf::Descriptor* DH_SC_AckStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DH_SC_AckStatus_reflection_ = NULL;
const ::google::protobuf::Descriptor* DH_SC_GetDHInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DH_SC_GetDHInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_demonhunter_2eproto() {
  protobuf_AddDesc_demonhunter_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "demonhunter.proto");
  GOOGLE_CHECK(file != NULL);
  DH_CS_GetReword_descriptor_ = file->message_type(0);
  static const int DH_CS_GetReword_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_CS_GetReword, rewordid_),
  };
  DH_CS_GetReword_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DH_CS_GetReword_descriptor_,
      DH_CS_GetReword::default_instance_,
      DH_CS_GetReword_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_CS_GetReword, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_CS_GetReword, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DH_CS_GetReword));
  DH_SC_AckStatus_descriptor_ = file->message_type(1);
  static const int DH_SC_AckStatus_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_AckStatus, result_),
  };
  DH_SC_AckStatus_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DH_SC_AckStatus_descriptor_,
      DH_SC_AckStatus::default_instance_,
      DH_SC_AckStatus_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_AckStatus, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_AckStatus, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DH_SC_AckStatus));
  DH_SC_GetDHInfo_descriptor_ = file->message_type(2);
  static const int DH_SC_GetDHInfo_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_GetDHInfo, dhlev_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_GetDHInfo, dhexp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_GetDHInfo, dhcounts_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_GetDHInfo, dhbuycounts_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_GetDHInfo, dhcanup_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_GetDHInfo, rewodidlist_),
  };
  DH_SC_GetDHInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DH_SC_GetDHInfo_descriptor_,
      DH_SC_GetDHInfo::default_instance_,
      DH_SC_GetDHInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_GetDHInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DH_SC_GetDHInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DH_SC_GetDHInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_demonhunter_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DH_CS_GetReword_descriptor_, &DH_CS_GetReword::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DH_SC_AckStatus_descriptor_, &DH_SC_AckStatus::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DH_SC_GetDHInfo_descriptor_, &DH_SC_GetDHInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_demonhunter_2eproto() {
  delete DH_CS_GetReword::default_instance_;
  delete DH_CS_GetReword_reflection_;
  delete DH_SC_AckStatus::default_instance_;
  delete DH_SC_AckStatus_reflection_;
  delete DH_SC_GetDHInfo::default_instance_;
  delete DH_SC_GetDHInfo_reflection_;
}

void protobuf_AddDesc_demonhunter_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021demonhunter.proto\022\rproto.message\"#\n\017DH"
    "_CS_GetReword\022\020\n\010rewordid\030\001 \001(\r\"!\n\017DH_SC"
    "_AckStatus\022\016\n\006result\030\001 \001(\r\"|\n\017DH_SC_GetD"
    "HInfo\022\r\n\005dhlev\030\001 \001(\r\022\r\n\005dhexp\030\002 \001(\005\022\020\n\010d"
    "hcounts\030\003 \001(\005\022\023\n\013dhbuyCounts\030\004 \001(\005\022\017\n\007dh"
    "canup\030\005 \001(\r\022\023\n\013rewodidlist\030\006 \003(\rB\017\n\rprot"
    "o.message", 249);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "demonhunter.proto", &protobuf_RegisterTypes);
  DH_CS_GetReword::default_instance_ = new DH_CS_GetReword();
  DH_SC_AckStatus::default_instance_ = new DH_SC_AckStatus();
  DH_SC_GetDHInfo::default_instance_ = new DH_SC_GetDHInfo();
  DH_CS_GetReword::default_instance_->InitAsDefaultInstance();
  DH_SC_AckStatus::default_instance_->InitAsDefaultInstance();
  DH_SC_GetDHInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_demonhunter_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_demonhunter_2eproto {
  StaticDescriptorInitializer_demonhunter_2eproto() {
    protobuf_AddDesc_demonhunter_2eproto();
  }
} static_descriptor_initializer_demonhunter_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DH_CS_GetReword::kRewordidFieldNumber;
#endif  // !_MSC_VER

DH_CS_GetReword::DH_CS_GetReword()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DH_CS_GetReword::InitAsDefaultInstance() {
}

DH_CS_GetReword::DH_CS_GetReword(const DH_CS_GetReword& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DH_CS_GetReword::SharedCtor() {
  _cached_size_ = 0;
  rewordid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DH_CS_GetReword::~DH_CS_GetReword() {
  SharedDtor();
}

void DH_CS_GetReword::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DH_CS_GetReword::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DH_CS_GetReword::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DH_CS_GetReword_descriptor_;
}

const DH_CS_GetReword& DH_CS_GetReword::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_demonhunter_2eproto();
  return *default_instance_;
}

DH_CS_GetReword* DH_CS_GetReword::default_instance_ = NULL;

DH_CS_GetReword* DH_CS_GetReword::New() const {
  return new DH_CS_GetReword;
}

void DH_CS_GetReword::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    rewordid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DH_CS_GetReword::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 rewordid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rewordid_)));
          set_has_rewordid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DH_CS_GetReword::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 rewordid = 1;
  if (has_rewordid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->rewordid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DH_CS_GetReword::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 rewordid = 1;
  if (has_rewordid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->rewordid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DH_CS_GetReword::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 rewordid = 1;
    if (has_rewordid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->rewordid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DH_CS_GetReword::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DH_CS_GetReword* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DH_CS_GetReword*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DH_CS_GetReword::MergeFrom(const DH_CS_GetReword& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_rewordid()) {
      set_rewordid(from.rewordid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DH_CS_GetReword::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DH_CS_GetReword::CopyFrom(const DH_CS_GetReword& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DH_CS_GetReword::IsInitialized() const {

  return true;
}

void DH_CS_GetReword::Swap(DH_CS_GetReword* other) {
  if (other != this) {
    std::swap(rewordid_, other->rewordid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DH_CS_GetReword::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DH_CS_GetReword_descriptor_;
  metadata.reflection = DH_CS_GetReword_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int DH_SC_AckStatus::kResultFieldNumber;
#endif  // !_MSC_VER

DH_SC_AckStatus::DH_SC_AckStatus()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DH_SC_AckStatus::InitAsDefaultInstance() {
}

DH_SC_AckStatus::DH_SC_AckStatus(const DH_SC_AckStatus& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DH_SC_AckStatus::SharedCtor() {
  _cached_size_ = 0;
  result_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DH_SC_AckStatus::~DH_SC_AckStatus() {
  SharedDtor();
}

void DH_SC_AckStatus::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DH_SC_AckStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DH_SC_AckStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DH_SC_AckStatus_descriptor_;
}

const DH_SC_AckStatus& DH_SC_AckStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_demonhunter_2eproto();
  return *default_instance_;
}

DH_SC_AckStatus* DH_SC_AckStatus::default_instance_ = NULL;

DH_SC_AckStatus* DH_SC_AckStatus::New() const {
  return new DH_SC_AckStatus;
}

void DH_SC_AckStatus::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    result_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DH_SC_AckStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 result = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DH_SC_AckStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 result = 1;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->result(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DH_SC_AckStatus::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 result = 1;
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->result(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DH_SC_AckStatus::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 result = 1;
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->result());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DH_SC_AckStatus::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DH_SC_AckStatus* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DH_SC_AckStatus*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DH_SC_AckStatus::MergeFrom(const DH_SC_AckStatus& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DH_SC_AckStatus::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DH_SC_AckStatus::CopyFrom(const DH_SC_AckStatus& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DH_SC_AckStatus::IsInitialized() const {

  return true;
}

void DH_SC_AckStatus::Swap(DH_SC_AckStatus* other) {
  if (other != this) {
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DH_SC_AckStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DH_SC_AckStatus_descriptor_;
  metadata.reflection = DH_SC_AckStatus_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int DH_SC_GetDHInfo::kDhlevFieldNumber;
const int DH_SC_GetDHInfo::kDhexpFieldNumber;
const int DH_SC_GetDHInfo::kDhcountsFieldNumber;
const int DH_SC_GetDHInfo::kDhbuyCountsFieldNumber;
const int DH_SC_GetDHInfo::kDhcanupFieldNumber;
const int DH_SC_GetDHInfo::kRewodidlistFieldNumber;
#endif  // !_MSC_VER

DH_SC_GetDHInfo::DH_SC_GetDHInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DH_SC_GetDHInfo::InitAsDefaultInstance() {
}

DH_SC_GetDHInfo::DH_SC_GetDHInfo(const DH_SC_GetDHInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DH_SC_GetDHInfo::SharedCtor() {
  _cached_size_ = 0;
  dhlev_ = 0u;
  dhexp_ = 0;
  dhcounts_ = 0;
  dhbuycounts_ = 0;
  dhcanup_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DH_SC_GetDHInfo::~DH_SC_GetDHInfo() {
  SharedDtor();
}

void DH_SC_GetDHInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DH_SC_GetDHInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DH_SC_GetDHInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DH_SC_GetDHInfo_descriptor_;
}

const DH_SC_GetDHInfo& DH_SC_GetDHInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_demonhunter_2eproto();
  return *default_instance_;
}

DH_SC_GetDHInfo* DH_SC_GetDHInfo::default_instance_ = NULL;

DH_SC_GetDHInfo* DH_SC_GetDHInfo::New() const {
  return new DH_SC_GetDHInfo;
}

void DH_SC_GetDHInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    dhlev_ = 0u;
    dhexp_ = 0;
    dhcounts_ = 0;
    dhbuycounts_ = 0;
    dhcanup_ = 0u;
  }
  rewodidlist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DH_SC_GetDHInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 dhlev = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dhlev_)));
          set_has_dhlev();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_dhexp;
        break;
      }

      // optional int32 dhexp = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_dhexp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dhexp_)));
          set_has_dhexp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_dhcounts;
        break;
      }

      // optional int32 dhcounts = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_dhcounts:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dhcounts_)));
          set_has_dhcounts();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_dhbuyCounts;
        break;
      }

      // optional int32 dhbuyCounts = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_dhbuyCounts:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dhbuycounts_)));
          set_has_dhbuycounts();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_dhcanup;
        break;
      }

      // optional uint32 dhcanup = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_dhcanup:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dhcanup_)));
          set_has_dhcanup();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_rewodidlist;
        break;
      }

      // repeated uint32 rewodidlist = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rewodidlist:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 48, input, this->mutable_rewodidlist())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_rewodidlist())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_rewodidlist;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DH_SC_GetDHInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 dhlev = 1;
  if (has_dhlev()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->dhlev(), output);
  }

  // optional int32 dhexp = 2;
  if (has_dhexp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->dhexp(), output);
  }

  // optional int32 dhcounts = 3;
  if (has_dhcounts()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->dhcounts(), output);
  }

  // optional int32 dhbuyCounts = 4;
  if (has_dhbuycounts()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->dhbuycounts(), output);
  }

  // optional uint32 dhcanup = 5;
  if (has_dhcanup()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->dhcanup(), output);
  }

  // repeated uint32 rewodidlist = 6;
  for (int i = 0; i < this->rewodidlist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      6, this->rewodidlist(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DH_SC_GetDHInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 dhlev = 1;
  if (has_dhlev()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->dhlev(), target);
  }

  // optional int32 dhexp = 2;
  if (has_dhexp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->dhexp(), target);
  }

  // optional int32 dhcounts = 3;
  if (has_dhcounts()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->dhcounts(), target);
  }

  // optional int32 dhbuyCounts = 4;
  if (has_dhbuycounts()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->dhbuycounts(), target);
  }

  // optional uint32 dhcanup = 5;
  if (has_dhcanup()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->dhcanup(), target);
  }

  // repeated uint32 rewodidlist = 6;
  for (int i = 0; i < this->rewodidlist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(6, this->rewodidlist(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DH_SC_GetDHInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 dhlev = 1;
    if (has_dhlev()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dhlev());
    }

    // optional int32 dhexp = 2;
    if (has_dhexp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->dhexp());
    }

    // optional int32 dhcounts = 3;
    if (has_dhcounts()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->dhcounts());
    }

    // optional int32 dhbuyCounts = 4;
    if (has_dhbuycounts()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->dhbuycounts());
    }

    // optional uint32 dhcanup = 5;
    if (has_dhcanup()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dhcanup());
    }

  }
  // repeated uint32 rewodidlist = 6;
  {
    int data_size = 0;
    for (int i = 0; i < this->rewodidlist_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->rewodidlist(i));
    }
    total_size += 1 * this->rewodidlist_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DH_SC_GetDHInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DH_SC_GetDHInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DH_SC_GetDHInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DH_SC_GetDHInfo::MergeFrom(const DH_SC_GetDHInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  rewodidlist_.MergeFrom(from.rewodidlist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_dhlev()) {
      set_dhlev(from.dhlev());
    }
    if (from.has_dhexp()) {
      set_dhexp(from.dhexp());
    }
    if (from.has_dhcounts()) {
      set_dhcounts(from.dhcounts());
    }
    if (from.has_dhbuycounts()) {
      set_dhbuycounts(from.dhbuycounts());
    }
    if (from.has_dhcanup()) {
      set_dhcanup(from.dhcanup());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DH_SC_GetDHInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DH_SC_GetDHInfo::CopyFrom(const DH_SC_GetDHInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DH_SC_GetDHInfo::IsInitialized() const {

  return true;
}

void DH_SC_GetDHInfo::Swap(DH_SC_GetDHInfo* other) {
  if (other != this) {
    std::swap(dhlev_, other->dhlev_);
    std::swap(dhexp_, other->dhexp_);
    std::swap(dhcounts_, other->dhcounts_);
    std::swap(dhbuycounts_, other->dhbuycounts_);
    std::swap(dhcanup_, other->dhcanup_);
    rewodidlist_.Swap(&other->rewodidlist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DH_SC_GetDHInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DH_SC_GetDHInfo_descriptor_;
  metadata.reflection = DH_SC_GetDHInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message
}  // namespace proto

// @@protoc_insertion_point(global_scope)