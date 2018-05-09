// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: db_item.proto

#ifndef PROTOBUF_db_5fitem_2eproto__INCLUDED
#define PROTOBUF_db_5fitem_2eproto__INCLUDED

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
#include "common.pb.h"
#include "item.pb.h"
// @@protoc_insertion_point(includes)

namespace proto {
namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_db_5fitem_2eproto();
void protobuf_AssignDesc_db_5fitem_2eproto();
void protobuf_ShutdownFile_db_5fitem_2eproto();

class Bag;
class AllItemInfo;
class EquiponInfo;

// ===================================================================

class Bag : public ::google::protobuf::Message {
 public:
  Bag();
  virtual ~Bag();

  Bag(const Bag& from);

  inline Bag& operator=(const Bag& from) {
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
  static const Bag& default_instance();

  void Swap(Bag* other);

  // implements Message ----------------------------------------------

  Bag* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Bag& from);
  void MergeFrom(const Bag& from);
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

  // optional int32 grid_num = 1;
  inline bool has_grid_num() const;
  inline void clear_grid_num();
  static const int kGridNumFieldNumber = 1;
  inline ::google::protobuf::int32 grid_num() const;
  inline void set_grid_num(::google::protobuf::int32 value);

  // repeated .proto.message.Item item_list = 2;
  inline int item_list_size() const;
  inline void clear_item_list();
  static const int kItemListFieldNumber = 2;
  inline const ::proto::message::Item& item_list(int index) const;
  inline ::proto::message::Item* mutable_item_list(int index);
  inline ::proto::message::Item* add_item_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::Item >&
      item_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::Item >*
      mutable_item_list();

  // repeated .proto.message.Equip equip_list = 3;
  inline int equip_list_size() const;
  inline void clear_equip_list();
  static const int kEquipListFieldNumber = 3;
  inline const ::proto::message::Equip& equip_list(int index) const;
  inline ::proto::message::Equip* mutable_equip_list(int index);
  inline ::proto::message::Equip* add_equip_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::Equip >&
      equip_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::Equip >*
      mutable_equip_list();

  // repeated .proto.message.IDNum itemUseCount = 4;
  inline int itemusecount_size() const;
  inline void clear_itemusecount();
  static const int kItemUseCountFieldNumber = 4;
  inline const ::proto::message::IDNum& itemusecount(int index) const;
  inline ::proto::message::IDNum* mutable_itemusecount(int index);
  inline ::proto::message::IDNum* add_itemusecount();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum >&
      itemusecount() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum >*
      mutable_itemusecount();

  // repeated .proto.message.IDNum item_piece_list = 5;
  inline int item_piece_list_size() const;
  inline void clear_item_piece_list();
  static const int kItemPieceListFieldNumber = 5;
  inline const ::proto::message::IDNum& item_piece_list(int index) const;
  inline ::proto::message::IDNum* mutable_item_piece_list(int index);
  inline ::proto::message::IDNum* add_item_piece_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum >&
      item_piece_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum >*
      mutable_item_piece_list();

  // @@protoc_insertion_point(class_scope:proto.message.Bag)
 private:
  inline void set_has_grid_num();
  inline void clear_has_grid_num();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto::message::Item > item_list_;
  ::google::protobuf::RepeatedPtrField< ::proto::message::Equip > equip_list_;
  ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum > itemusecount_;
  ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum > item_piece_list_;
  ::google::protobuf::int32 grid_num_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fitem_2eproto();
  friend void protobuf_AssignDesc_db_5fitem_2eproto();
  friend void protobuf_ShutdownFile_db_5fitem_2eproto();

  void InitAsDefaultInstance();
  static Bag* default_instance_;
};
// -------------------------------------------------------------------

class AllItemInfo : public ::google::protobuf::Message {
 public:
  AllItemInfo();
  virtual ~AllItemInfo();

  AllItemInfo(const AllItemInfo& from);

  inline AllItemInfo& operator=(const AllItemInfo& from) {
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
  static const AllItemInfo& default_instance();

  void Swap(AllItemInfo* other);

  // implements Message ----------------------------------------------

  AllItemInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AllItemInfo& from);
  void MergeFrom(const AllItemInfo& from);
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

  // optional .proto.message.Bag player_bag = 1;
  inline bool has_player_bag() const;
  inline void clear_player_bag();
  static const int kPlayerBagFieldNumber = 1;
  inline const ::proto::message::Bag& player_bag() const;
  inline ::proto::message::Bag* mutable_player_bag();
  inline ::proto::message::Bag* release_player_bag();
  inline void set_allocated_player_bag(::proto::message::Bag* player_bag);

  // optional .proto.message.Bag temp_bag = 2;
  inline bool has_temp_bag() const;
  inline void clear_temp_bag();
  static const int kTempBagFieldNumber = 2;
  inline const ::proto::message::Bag& temp_bag() const;
  inline ::proto::message::Bag* mutable_temp_bag();
  inline ::proto::message::Bag* release_temp_bag();
  inline void set_allocated_temp_bag(::proto::message::Bag* temp_bag);

  // optional .proto.message.Bag store_1 = 3;
  inline bool has_store_1() const;
  inline void clear_store_1();
  static const int kStore1FieldNumber = 3;
  inline const ::proto::message::Bag& store_1() const;
  inline ::proto::message::Bag* mutable_store_1();
  inline ::proto::message::Bag* release_store_1();
  inline void set_allocated_store_1(::proto::message::Bag* store_1);

  // optional .proto.message.Bag store_2 = 4;
  inline bool has_store_2() const;
  inline void clear_store_2();
  static const int kStore2FieldNumber = 4;
  inline const ::proto::message::Bag& store_2() const;
  inline ::proto::message::Bag* mutable_store_2();
  inline ::proto::message::Bag* release_store_2();
  inline void set_allocated_store_2(::proto::message::Bag* store_2);

  // optional .proto.message.Bag store_3 = 5;
  inline bool has_store_3() const;
  inline void clear_store_3();
  static const int kStore3FieldNumber = 5;
  inline const ::proto::message::Bag& store_3() const;
  inline ::proto::message::Bag* mutable_store_3();
  inline ::proto::message::Bag* release_store_3();
  inline void set_allocated_store_3(::proto::message::Bag* store_3);

  // optional .proto.message.Bag store_4 = 6;
  inline bool has_store_4() const;
  inline void clear_store_4();
  static const int kStore4FieldNumber = 6;
  inline const ::proto::message::Bag& store_4() const;
  inline ::proto::message::Bag* mutable_store_4();
  inline ::proto::message::Bag* release_store_4();
  inline void set_allocated_store_4(::proto::message::Bag* store_4);

  // optional .proto.message.Bag store_5 = 7;
  inline bool has_store_5() const;
  inline void clear_store_5();
  static const int kStore5FieldNumber = 7;
  inline const ::proto::message::Bag& store_5() const;
  inline ::proto::message::Bag* mutable_store_5();
  inline ::proto::message::Bag* release_store_5();
  inline void set_allocated_store_5(::proto::message::Bag* store_5);

  // optional .proto.message.Bag store_6 = 8;
  inline bool has_store_6() const;
  inline void clear_store_6();
  static const int kStore6FieldNumber = 8;
  inline const ::proto::message::Bag& store_6() const;
  inline ::proto::message::Bag* mutable_store_6();
  inline ::proto::message::Bag* release_store_6();
  inline void set_allocated_store_6(::proto::message::Bag* store_6);

  // optional .proto.message.Bag store_7 = 9;
  inline bool has_store_7() const;
  inline void clear_store_7();
  static const int kStore7FieldNumber = 9;
  inline const ::proto::message::Bag& store_7() const;
  inline ::proto::message::Bag* mutable_store_7();
  inline ::proto::message::Bag* release_store_7();
  inline void set_allocated_store_7(::proto::message::Bag* store_7);

  // optional .proto.message.Bag store_8 = 10;
  inline bool has_store_8() const;
  inline void clear_store_8();
  static const int kStore8FieldNumber = 10;
  inline const ::proto::message::Bag& store_8() const;
  inline ::proto::message::Bag* mutable_store_8();
  inline ::proto::message::Bag* release_store_8();
  inline void set_allocated_store_8(::proto::message::Bag* store_8);

  // @@protoc_insertion_point(class_scope:proto.message.AllItemInfo)
 private:
  inline void set_has_player_bag();
  inline void clear_has_player_bag();
  inline void set_has_temp_bag();
  inline void clear_has_temp_bag();
  inline void set_has_store_1();
  inline void clear_has_store_1();
  inline void set_has_store_2();
  inline void clear_has_store_2();
  inline void set_has_store_3();
  inline void clear_has_store_3();
  inline void set_has_store_4();
  inline void clear_has_store_4();
  inline void set_has_store_5();
  inline void clear_has_store_5();
  inline void set_has_store_6();
  inline void clear_has_store_6();
  inline void set_has_store_7();
  inline void clear_has_store_7();
  inline void set_has_store_8();
  inline void clear_has_store_8();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::proto::message::Bag* player_bag_;
  ::proto::message::Bag* temp_bag_;
  ::proto::message::Bag* store_1_;
  ::proto::message::Bag* store_2_;
  ::proto::message::Bag* store_3_;
  ::proto::message::Bag* store_4_;
  ::proto::message::Bag* store_5_;
  ::proto::message::Bag* store_6_;
  ::proto::message::Bag* store_7_;
  ::proto::message::Bag* store_8_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fitem_2eproto();
  friend void protobuf_AssignDesc_db_5fitem_2eproto();
  friend void protobuf_ShutdownFile_db_5fitem_2eproto();

  void InitAsDefaultInstance();
  static AllItemInfo* default_instance_;
};
// -------------------------------------------------------------------

class EquiponInfo : public ::google::protobuf::Message {
 public:
  EquiponInfo();
  virtual ~EquiponInfo();

  EquiponInfo(const EquiponInfo& from);

  inline EquiponInfo& operator=(const EquiponInfo& from) {
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
  static const EquiponInfo& default_instance();

  void Swap(EquiponInfo* other);

  // implements Message ----------------------------------------------

  EquiponInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EquiponInfo& from);
  void MergeFrom(const EquiponInfo& from);
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

  // repeated .proto.message.Equip equip_list = 1;
  inline int equip_list_size() const;
  inline void clear_equip_list();
  static const int kEquipListFieldNumber = 1;
  inline const ::proto::message::Equip& equip_list(int index) const;
  inline ::proto::message::Equip* mutable_equip_list(int index);
  inline ::proto::message::Equip* add_equip_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::Equip >&
      equip_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::Equip >*
      mutable_equip_list();

  // repeated .proto.message.EquipGird equipgird_list = 2;
  inline int equipgird_list_size() const;
  inline void clear_equipgird_list();
  static const int kEquipgirdListFieldNumber = 2;
  inline const ::proto::message::EquipGird& equipgird_list(int index) const;
  inline ::proto::message::EquipGird* mutable_equipgird_list(int index);
  inline ::proto::message::EquipGird* add_equipgird_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::EquipGird >&
      equipgird_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::EquipGird >*
      mutable_equipgird_list();

  // repeated .proto.message.EquipSuit suit_list = 3;
  inline int suit_list_size() const;
  inline void clear_suit_list();
  static const int kSuitListFieldNumber = 3;
  inline const ::proto::message::EquipSuit& suit_list(int index) const;
  inline ::proto::message::EquipSuit* mutable_suit_list(int index);
  inline ::proto::message::EquipSuit* add_suit_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::EquipSuit >&
      suit_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::EquipSuit >*
      mutable_suit_list();

  // optional uint32 suitid = 4;
  inline bool has_suitid() const;
  inline void clear_suitid();
  static const int kSuitidFieldNumber = 4;
  inline ::google::protobuf::uint32 suitid() const;
  inline void set_suitid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto.message.EquiponInfo)
 private:
  inline void set_has_suitid();
  inline void clear_has_suitid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto::message::Equip > equip_list_;
  ::google::protobuf::RepeatedPtrField< ::proto::message::EquipGird > equipgird_list_;
  ::google::protobuf::RepeatedPtrField< ::proto::message::EquipSuit > suit_list_;
  ::google::protobuf::uint32 suitid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fitem_2eproto();
  friend void protobuf_AssignDesc_db_5fitem_2eproto();
  friend void protobuf_ShutdownFile_db_5fitem_2eproto();

  void InitAsDefaultInstance();
  static EquiponInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// Bag

// optional int32 grid_num = 1;
inline bool Bag::has_grid_num() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Bag::set_has_grid_num() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Bag::clear_has_grid_num() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Bag::clear_grid_num() {
  grid_num_ = 0;
  clear_has_grid_num();
}
inline ::google::protobuf::int32 Bag::grid_num() const {
  return grid_num_;
}
inline void Bag::set_grid_num(::google::protobuf::int32 value) {
  set_has_grid_num();
  grid_num_ = value;
}

// repeated .proto.message.Item item_list = 2;
inline int Bag::item_list_size() const {
  return item_list_.size();
}
inline void Bag::clear_item_list() {
  item_list_.Clear();
}
inline const ::proto::message::Item& Bag::item_list(int index) const {
  return item_list_.Get(index);
}
inline ::proto::message::Item* Bag::mutable_item_list(int index) {
  return item_list_.Mutable(index);
}
inline ::proto::message::Item* Bag::add_item_list() {
  return item_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::Item >&
Bag::item_list() const {
  return item_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::Item >*
Bag::mutable_item_list() {
  return &item_list_;
}

// repeated .proto.message.Equip equip_list = 3;
inline int Bag::equip_list_size() const {
  return equip_list_.size();
}
inline void Bag::clear_equip_list() {
  equip_list_.Clear();
}
inline const ::proto::message::Equip& Bag::equip_list(int index) const {
  return equip_list_.Get(index);
}
inline ::proto::message::Equip* Bag::mutable_equip_list(int index) {
  return equip_list_.Mutable(index);
}
inline ::proto::message::Equip* Bag::add_equip_list() {
  return equip_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::Equip >&
Bag::equip_list() const {
  return equip_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::Equip >*
Bag::mutable_equip_list() {
  return &equip_list_;
}

// repeated .proto.message.IDNum itemUseCount = 4;
inline int Bag::itemusecount_size() const {
  return itemusecount_.size();
}
inline void Bag::clear_itemusecount() {
  itemusecount_.Clear();
}
inline const ::proto::message::IDNum& Bag::itemusecount(int index) const {
  return itemusecount_.Get(index);
}
inline ::proto::message::IDNum* Bag::mutable_itemusecount(int index) {
  return itemusecount_.Mutable(index);
}
inline ::proto::message::IDNum* Bag::add_itemusecount() {
  return itemusecount_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum >&
Bag::itemusecount() const {
  return itemusecount_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum >*
Bag::mutable_itemusecount() {
  return &itemusecount_;
}

// repeated .proto.message.IDNum item_piece_list = 5;
inline int Bag::item_piece_list_size() const {
  return item_piece_list_.size();
}
inline void Bag::clear_item_piece_list() {
  item_piece_list_.Clear();
}
inline const ::proto::message::IDNum& Bag::item_piece_list(int index) const {
  return item_piece_list_.Get(index);
}
inline ::proto::message::IDNum* Bag::mutable_item_piece_list(int index) {
  return item_piece_list_.Mutable(index);
}
inline ::proto::message::IDNum* Bag::add_item_piece_list() {
  return item_piece_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum >&
Bag::item_piece_list() const {
  return item_piece_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::IDNum >*
Bag::mutable_item_piece_list() {
  return &item_piece_list_;
}

// -------------------------------------------------------------------

// AllItemInfo

// optional .proto.message.Bag player_bag = 1;
inline bool AllItemInfo::has_player_bag() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AllItemInfo::set_has_player_bag() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AllItemInfo::clear_has_player_bag() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AllItemInfo::clear_player_bag() {
  if (player_bag_ != NULL) player_bag_->::proto::message::Bag::Clear();
  clear_has_player_bag();
}
inline const ::proto::message::Bag& AllItemInfo::player_bag() const {
  return player_bag_ != NULL ? *player_bag_ : *default_instance_->player_bag_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_player_bag() {
  set_has_player_bag();
  if (player_bag_ == NULL) player_bag_ = new ::proto::message::Bag;
  return player_bag_;
}
inline ::proto::message::Bag* AllItemInfo::release_player_bag() {
  clear_has_player_bag();
  ::proto::message::Bag* temp = player_bag_;
  player_bag_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_player_bag(::proto::message::Bag* player_bag) {
  delete player_bag_;
  player_bag_ = player_bag;
  if (player_bag) {
    set_has_player_bag();
  } else {
    clear_has_player_bag();
  }
}

// optional .proto.message.Bag temp_bag = 2;
inline bool AllItemInfo::has_temp_bag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AllItemInfo::set_has_temp_bag() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AllItemInfo::clear_has_temp_bag() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AllItemInfo::clear_temp_bag() {
  if (temp_bag_ != NULL) temp_bag_->::proto::message::Bag::Clear();
  clear_has_temp_bag();
}
inline const ::proto::message::Bag& AllItemInfo::temp_bag() const {
  return temp_bag_ != NULL ? *temp_bag_ : *default_instance_->temp_bag_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_temp_bag() {
  set_has_temp_bag();
  if (temp_bag_ == NULL) temp_bag_ = new ::proto::message::Bag;
  return temp_bag_;
}
inline ::proto::message::Bag* AllItemInfo::release_temp_bag() {
  clear_has_temp_bag();
  ::proto::message::Bag* temp = temp_bag_;
  temp_bag_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_temp_bag(::proto::message::Bag* temp_bag) {
  delete temp_bag_;
  temp_bag_ = temp_bag;
  if (temp_bag) {
    set_has_temp_bag();
  } else {
    clear_has_temp_bag();
  }
}

// optional .proto.message.Bag store_1 = 3;
inline bool AllItemInfo::has_store_1() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AllItemInfo::set_has_store_1() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AllItemInfo::clear_has_store_1() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AllItemInfo::clear_store_1() {
  if (store_1_ != NULL) store_1_->::proto::message::Bag::Clear();
  clear_has_store_1();
}
inline const ::proto::message::Bag& AllItemInfo::store_1() const {
  return store_1_ != NULL ? *store_1_ : *default_instance_->store_1_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_store_1() {
  set_has_store_1();
  if (store_1_ == NULL) store_1_ = new ::proto::message::Bag;
  return store_1_;
}
inline ::proto::message::Bag* AllItemInfo::release_store_1() {
  clear_has_store_1();
  ::proto::message::Bag* temp = store_1_;
  store_1_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_store_1(::proto::message::Bag* store_1) {
  delete store_1_;
  store_1_ = store_1;
  if (store_1) {
    set_has_store_1();
  } else {
    clear_has_store_1();
  }
}

// optional .proto.message.Bag store_2 = 4;
inline bool AllItemInfo::has_store_2() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AllItemInfo::set_has_store_2() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AllItemInfo::clear_has_store_2() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AllItemInfo::clear_store_2() {
  if (store_2_ != NULL) store_2_->::proto::message::Bag::Clear();
  clear_has_store_2();
}
inline const ::proto::message::Bag& AllItemInfo::store_2() const {
  return store_2_ != NULL ? *store_2_ : *default_instance_->store_2_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_store_2() {
  set_has_store_2();
  if (store_2_ == NULL) store_2_ = new ::proto::message::Bag;
  return store_2_;
}
inline ::proto::message::Bag* AllItemInfo::release_store_2() {
  clear_has_store_2();
  ::proto::message::Bag* temp = store_2_;
  store_2_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_store_2(::proto::message::Bag* store_2) {
  delete store_2_;
  store_2_ = store_2;
  if (store_2) {
    set_has_store_2();
  } else {
    clear_has_store_2();
  }
}

// optional .proto.message.Bag store_3 = 5;
inline bool AllItemInfo::has_store_3() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AllItemInfo::set_has_store_3() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AllItemInfo::clear_has_store_3() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AllItemInfo::clear_store_3() {
  if (store_3_ != NULL) store_3_->::proto::message::Bag::Clear();
  clear_has_store_3();
}
inline const ::proto::message::Bag& AllItemInfo::store_3() const {
  return store_3_ != NULL ? *store_3_ : *default_instance_->store_3_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_store_3() {
  set_has_store_3();
  if (store_3_ == NULL) store_3_ = new ::proto::message::Bag;
  return store_3_;
}
inline ::proto::message::Bag* AllItemInfo::release_store_3() {
  clear_has_store_3();
  ::proto::message::Bag* temp = store_3_;
  store_3_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_store_3(::proto::message::Bag* store_3) {
  delete store_3_;
  store_3_ = store_3;
  if (store_3) {
    set_has_store_3();
  } else {
    clear_has_store_3();
  }
}

// optional .proto.message.Bag store_4 = 6;
inline bool AllItemInfo::has_store_4() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AllItemInfo::set_has_store_4() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AllItemInfo::clear_has_store_4() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AllItemInfo::clear_store_4() {
  if (store_4_ != NULL) store_4_->::proto::message::Bag::Clear();
  clear_has_store_4();
}
inline const ::proto::message::Bag& AllItemInfo::store_4() const {
  return store_4_ != NULL ? *store_4_ : *default_instance_->store_4_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_store_4() {
  set_has_store_4();
  if (store_4_ == NULL) store_4_ = new ::proto::message::Bag;
  return store_4_;
}
inline ::proto::message::Bag* AllItemInfo::release_store_4() {
  clear_has_store_4();
  ::proto::message::Bag* temp = store_4_;
  store_4_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_store_4(::proto::message::Bag* store_4) {
  delete store_4_;
  store_4_ = store_4;
  if (store_4) {
    set_has_store_4();
  } else {
    clear_has_store_4();
  }
}

// optional .proto.message.Bag store_5 = 7;
inline bool AllItemInfo::has_store_5() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AllItemInfo::set_has_store_5() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AllItemInfo::clear_has_store_5() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AllItemInfo::clear_store_5() {
  if (store_5_ != NULL) store_5_->::proto::message::Bag::Clear();
  clear_has_store_5();
}
inline const ::proto::message::Bag& AllItemInfo::store_5() const {
  return store_5_ != NULL ? *store_5_ : *default_instance_->store_5_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_store_5() {
  set_has_store_5();
  if (store_5_ == NULL) store_5_ = new ::proto::message::Bag;
  return store_5_;
}
inline ::proto::message::Bag* AllItemInfo::release_store_5() {
  clear_has_store_5();
  ::proto::message::Bag* temp = store_5_;
  store_5_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_store_5(::proto::message::Bag* store_5) {
  delete store_5_;
  store_5_ = store_5;
  if (store_5) {
    set_has_store_5();
  } else {
    clear_has_store_5();
  }
}

// optional .proto.message.Bag store_6 = 8;
inline bool AllItemInfo::has_store_6() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void AllItemInfo::set_has_store_6() {
  _has_bits_[0] |= 0x00000080u;
}
inline void AllItemInfo::clear_has_store_6() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void AllItemInfo::clear_store_6() {
  if (store_6_ != NULL) store_6_->::proto::message::Bag::Clear();
  clear_has_store_6();
}
inline const ::proto::message::Bag& AllItemInfo::store_6() const {
  return store_6_ != NULL ? *store_6_ : *default_instance_->store_6_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_store_6() {
  set_has_store_6();
  if (store_6_ == NULL) store_6_ = new ::proto::message::Bag;
  return store_6_;
}
inline ::proto::message::Bag* AllItemInfo::release_store_6() {
  clear_has_store_6();
  ::proto::message::Bag* temp = store_6_;
  store_6_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_store_6(::proto::message::Bag* store_6) {
  delete store_6_;
  store_6_ = store_6;
  if (store_6) {
    set_has_store_6();
  } else {
    clear_has_store_6();
  }
}

// optional .proto.message.Bag store_7 = 9;
inline bool AllItemInfo::has_store_7() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void AllItemInfo::set_has_store_7() {
  _has_bits_[0] |= 0x00000100u;
}
inline void AllItemInfo::clear_has_store_7() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void AllItemInfo::clear_store_7() {
  if (store_7_ != NULL) store_7_->::proto::message::Bag::Clear();
  clear_has_store_7();
}
inline const ::proto::message::Bag& AllItemInfo::store_7() const {
  return store_7_ != NULL ? *store_7_ : *default_instance_->store_7_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_store_7() {
  set_has_store_7();
  if (store_7_ == NULL) store_7_ = new ::proto::message::Bag;
  return store_7_;
}
inline ::proto::message::Bag* AllItemInfo::release_store_7() {
  clear_has_store_7();
  ::proto::message::Bag* temp = store_7_;
  store_7_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_store_7(::proto::message::Bag* store_7) {
  delete store_7_;
  store_7_ = store_7;
  if (store_7) {
    set_has_store_7();
  } else {
    clear_has_store_7();
  }
}

// optional .proto.message.Bag store_8 = 10;
inline bool AllItemInfo::has_store_8() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void AllItemInfo::set_has_store_8() {
  _has_bits_[0] |= 0x00000200u;
}
inline void AllItemInfo::clear_has_store_8() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void AllItemInfo::clear_store_8() {
  if (store_8_ != NULL) store_8_->::proto::message::Bag::Clear();
  clear_has_store_8();
}
inline const ::proto::message::Bag& AllItemInfo::store_8() const {
  return store_8_ != NULL ? *store_8_ : *default_instance_->store_8_;
}
inline ::proto::message::Bag* AllItemInfo::mutable_store_8() {
  set_has_store_8();
  if (store_8_ == NULL) store_8_ = new ::proto::message::Bag;
  return store_8_;
}
inline ::proto::message::Bag* AllItemInfo::release_store_8() {
  clear_has_store_8();
  ::proto::message::Bag* temp = store_8_;
  store_8_ = NULL;
  return temp;
}
inline void AllItemInfo::set_allocated_store_8(::proto::message::Bag* store_8) {
  delete store_8_;
  store_8_ = store_8;
  if (store_8) {
    set_has_store_8();
  } else {
    clear_has_store_8();
  }
}

// -------------------------------------------------------------------

// EquiponInfo

// repeated .proto.message.Equip equip_list = 1;
inline int EquiponInfo::equip_list_size() const {
  return equip_list_.size();
}
inline void EquiponInfo::clear_equip_list() {
  equip_list_.Clear();
}
inline const ::proto::message::Equip& EquiponInfo::equip_list(int index) const {
  return equip_list_.Get(index);
}
inline ::proto::message::Equip* EquiponInfo::mutable_equip_list(int index) {
  return equip_list_.Mutable(index);
}
inline ::proto::message::Equip* EquiponInfo::add_equip_list() {
  return equip_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::Equip >&
EquiponInfo::equip_list() const {
  return equip_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::Equip >*
EquiponInfo::mutable_equip_list() {
  return &equip_list_;
}

// repeated .proto.message.EquipGird equipgird_list = 2;
inline int EquiponInfo::equipgird_list_size() const {
  return equipgird_list_.size();
}
inline void EquiponInfo::clear_equipgird_list() {
  equipgird_list_.Clear();
}
inline const ::proto::message::EquipGird& EquiponInfo::equipgird_list(int index) const {
  return equipgird_list_.Get(index);
}
inline ::proto::message::EquipGird* EquiponInfo::mutable_equipgird_list(int index) {
  return equipgird_list_.Mutable(index);
}
inline ::proto::message::EquipGird* EquiponInfo::add_equipgird_list() {
  return equipgird_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::EquipGird >&
EquiponInfo::equipgird_list() const {
  return equipgird_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::EquipGird >*
EquiponInfo::mutable_equipgird_list() {
  return &equipgird_list_;
}

// repeated .proto.message.EquipSuit suit_list = 3;
inline int EquiponInfo::suit_list_size() const {
  return suit_list_.size();
}
inline void EquiponInfo::clear_suit_list() {
  suit_list_.Clear();
}
inline const ::proto::message::EquipSuit& EquiponInfo::suit_list(int index) const {
  return suit_list_.Get(index);
}
inline ::proto::message::EquipSuit* EquiponInfo::mutable_suit_list(int index) {
  return suit_list_.Mutable(index);
}
inline ::proto::message::EquipSuit* EquiponInfo::add_suit_list() {
  return suit_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::EquipSuit >&
EquiponInfo::suit_list() const {
  return suit_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::EquipSuit >*
EquiponInfo::mutable_suit_list() {
  return &suit_list_;
}

// optional uint32 suitid = 4;
inline bool EquiponInfo::has_suitid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EquiponInfo::set_has_suitid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EquiponInfo::clear_has_suitid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EquiponInfo::clear_suitid() {
  suitid_ = 0u;
  clear_has_suitid();
}
inline ::google::protobuf::uint32 EquiponInfo::suitid() const {
  return suitid_;
}
inline void EquiponInfo::set_suitid(::google::protobuf::uint32 value) {
  set_has_suitid();
  suitid_ = value;
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

#endif  // PROTOBUF_db_5fitem_2eproto__INCLUDED
