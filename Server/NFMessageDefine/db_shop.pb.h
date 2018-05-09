// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: db_shop.proto

#ifndef PROTOBUF_db_5fshop_2eproto__INCLUDED
#define PROTOBUF_db_5fshop_2eproto__INCLUDED

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
#include "shop.pb.h"
// @@protoc_insertion_point(includes)

namespace proto {
namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_db_5fshop_2eproto();
void protobuf_AssignDesc_db_5fshop_2eproto();
void protobuf_ShutdownFile_db_5fshop_2eproto();

class ShopInfo;
class DBShopItem;
class DBShopIntegral;

// ===================================================================

class ShopInfo : public ::google::protobuf::Message {
 public:
  ShopInfo();
  virtual ~ShopInfo();

  ShopInfo(const ShopInfo& from);

  inline ShopInfo& operator=(const ShopInfo& from) {
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
  static const ShopInfo& default_instance();

  void Swap(ShopInfo* other);

  // implements Message ----------------------------------------------

  ShopInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ShopInfo& from);
  void MergeFrom(const ShopInfo& from);
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

  // repeated .proto.message.ShopItemBuy shop_item_list = 3;
  inline int shop_item_list_size() const;
  inline void clear_shop_item_list();
  static const int kShopItemListFieldNumber = 3;
  inline const ::proto::message::ShopItemBuy& shop_item_list(int index) const;
  inline ::proto::message::ShopItemBuy* mutable_shop_item_list(int index);
  inline ::proto::message::ShopItemBuy* add_shop_item_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::ShopItemBuy >&
      shop_item_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::ShopItemBuy >*
      mutable_shop_item_list();

  // repeated .proto.message.MallItemBuy mall_item_list = 4;
  inline int mall_item_list_size() const;
  inline void clear_mall_item_list();
  static const int kMallItemListFieldNumber = 4;
  inline const ::proto::message::MallItemBuy& mall_item_list(int index) const;
  inline ::proto::message::MallItemBuy* mutable_mall_item_list(int index);
  inline ::proto::message::MallItemBuy* add_mall_item_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >&
      mall_item_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >*
      mutable_mall_item_list();

  // repeated .proto.message.MallItemBuy integral_item = 5;
  inline int integral_item_size() const;
  inline void clear_integral_item();
  static const int kIntegralItemFieldNumber = 5;
  inline const ::proto::message::MallItemBuy& integral_item(int index) const;
  inline ::proto::message::MallItemBuy* mutable_integral_item(int index);
  inline ::proto::message::MallItemBuy* add_integral_item();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >&
      integral_item() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >*
      mutable_integral_item();

  // repeated .proto.message.MallItemBuy fastbuy_time = 6;
  inline int fastbuy_time_size() const;
  inline void clear_fastbuy_time();
  static const int kFastbuyTimeFieldNumber = 6;
  inline const ::proto::message::MallItemBuy& fastbuy_time(int index) const;
  inline ::proto::message::MallItemBuy* mutable_fastbuy_time(int index);
  inline ::proto::message::MallItemBuy* add_fastbuy_time();
  inline const ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >&
      fastbuy_time() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >*
      mutable_fastbuy_time();

  // @@protoc_insertion_point(class_scope:proto.message.ShopInfo)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto::message::ShopItemBuy > shop_item_list_;
  ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy > mall_item_list_;
  ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy > integral_item_;
  ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy > fastbuy_time_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fshop_2eproto();
  friend void protobuf_AssignDesc_db_5fshop_2eproto();
  friend void protobuf_ShutdownFile_db_5fshop_2eproto();

  void InitAsDefaultInstance();
  static ShopInfo* default_instance_;
};
// -------------------------------------------------------------------

class DBShopItem : public ::google::protobuf::Message {
 public:
  DBShopItem();
  virtual ~DBShopItem();

  DBShopItem(const DBShopItem& from);

  inline DBShopItem& operator=(const DBShopItem& from) {
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
  static const DBShopItem& default_instance();

  void Swap(DBShopItem* other);

  // implements Message ----------------------------------------------

  DBShopItem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DBShopItem& from);
  void MergeFrom(const DBShopItem& from);
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

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 buy_times = 2;
  inline bool has_buy_times() const;
  inline void clear_buy_times();
  static const int kBuyTimesFieldNumber = 2;
  inline ::google::protobuf::int32 buy_times() const;
  inline void set_buy_times(::google::protobuf::int32 value);

  // optional int32 sell_times = 3;
  inline bool has_sell_times() const;
  inline void clear_sell_times();
  static const int kSellTimesFieldNumber = 3;
  inline ::google::protobuf::int32 sell_times() const;
  inline void set_sell_times(::google::protobuf::int32 value);

  // optional int32 price = 4;
  inline bool has_price() const;
  inline void clear_price();
  static const int kPriceFieldNumber = 4;
  inline ::google::protobuf::int32 price() const;
  inline void set_price(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto.message.DBShopItem)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_buy_times();
  inline void clear_has_buy_times();
  inline void set_has_sell_times();
  inline void clear_has_sell_times();
  inline void set_has_price();
  inline void clear_has_price();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 buy_times_;
  ::google::protobuf::int32 sell_times_;
  ::google::protobuf::int32 price_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fshop_2eproto();
  friend void protobuf_AssignDesc_db_5fshop_2eproto();
  friend void protobuf_ShutdownFile_db_5fshop_2eproto();

  void InitAsDefaultInstance();
  static DBShopItem* default_instance_;
};
// -------------------------------------------------------------------

class DBShopIntegral : public ::google::protobuf::Message {
 public:
  DBShopIntegral();
  virtual ~DBShopIntegral();

  DBShopIntegral(const DBShopIntegral& from);

  inline DBShopIntegral& operator=(const DBShopIntegral& from) {
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
  static const DBShopIntegral& default_instance();

  void Swap(DBShopIntegral* other);

  // implements Message ----------------------------------------------

  DBShopIntegral* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DBShopIntegral& from);
  void MergeFrom(const DBShopIntegral& from);
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

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 buy_times = 2;
  inline bool has_buy_times() const;
  inline void clear_buy_times();
  static const int kBuyTimesFieldNumber = 2;
  inline ::google::protobuf::int32 buy_times() const;
  inline void set_buy_times(::google::protobuf::int32 value);

  // optional int32 price = 3;
  inline bool has_price() const;
  inline void clear_price();
  static const int kPriceFieldNumber = 3;
  inline ::google::protobuf::int32 price() const;
  inline void set_price(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto.message.DBShopIntegral)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_buy_times();
  inline void clear_has_buy_times();
  inline void set_has_price();
  inline void clear_has_price();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 buy_times_;
  ::google::protobuf::int32 price_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fshop_2eproto();
  friend void protobuf_AssignDesc_db_5fshop_2eproto();
  friend void protobuf_ShutdownFile_db_5fshop_2eproto();

  void InitAsDefaultInstance();
  static DBShopIntegral* default_instance_;
};
// ===================================================================


// ===================================================================

// ShopInfo

// repeated .proto.message.ShopItemBuy shop_item_list = 3;
inline int ShopInfo::shop_item_list_size() const {
  return shop_item_list_.size();
}
inline void ShopInfo::clear_shop_item_list() {
  shop_item_list_.Clear();
}
inline const ::proto::message::ShopItemBuy& ShopInfo::shop_item_list(int index) const {
  return shop_item_list_.Get(index);
}
inline ::proto::message::ShopItemBuy* ShopInfo::mutable_shop_item_list(int index) {
  return shop_item_list_.Mutable(index);
}
inline ::proto::message::ShopItemBuy* ShopInfo::add_shop_item_list() {
  return shop_item_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::ShopItemBuy >&
ShopInfo::shop_item_list() const {
  return shop_item_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::ShopItemBuy >*
ShopInfo::mutable_shop_item_list() {
  return &shop_item_list_;
}

// repeated .proto.message.MallItemBuy mall_item_list = 4;
inline int ShopInfo::mall_item_list_size() const {
  return mall_item_list_.size();
}
inline void ShopInfo::clear_mall_item_list() {
  mall_item_list_.Clear();
}
inline const ::proto::message::MallItemBuy& ShopInfo::mall_item_list(int index) const {
  return mall_item_list_.Get(index);
}
inline ::proto::message::MallItemBuy* ShopInfo::mutable_mall_item_list(int index) {
  return mall_item_list_.Mutable(index);
}
inline ::proto::message::MallItemBuy* ShopInfo::add_mall_item_list() {
  return mall_item_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >&
ShopInfo::mall_item_list() const {
  return mall_item_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >*
ShopInfo::mutable_mall_item_list() {
  return &mall_item_list_;
}

// repeated .proto.message.MallItemBuy integral_item = 5;
inline int ShopInfo::integral_item_size() const {
  return integral_item_.size();
}
inline void ShopInfo::clear_integral_item() {
  integral_item_.Clear();
}
inline const ::proto::message::MallItemBuy& ShopInfo::integral_item(int index) const {
  return integral_item_.Get(index);
}
inline ::proto::message::MallItemBuy* ShopInfo::mutable_integral_item(int index) {
  return integral_item_.Mutable(index);
}
inline ::proto::message::MallItemBuy* ShopInfo::add_integral_item() {
  return integral_item_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >&
ShopInfo::integral_item() const {
  return integral_item_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >*
ShopInfo::mutable_integral_item() {
  return &integral_item_;
}

// repeated .proto.message.MallItemBuy fastbuy_time = 6;
inline int ShopInfo::fastbuy_time_size() const {
  return fastbuy_time_.size();
}
inline void ShopInfo::clear_fastbuy_time() {
  fastbuy_time_.Clear();
}
inline const ::proto::message::MallItemBuy& ShopInfo::fastbuy_time(int index) const {
  return fastbuy_time_.Get(index);
}
inline ::proto::message::MallItemBuy* ShopInfo::mutable_fastbuy_time(int index) {
  return fastbuy_time_.Mutable(index);
}
inline ::proto::message::MallItemBuy* ShopInfo::add_fastbuy_time() {
  return fastbuy_time_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >&
ShopInfo::fastbuy_time() const {
  return fastbuy_time_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto::message::MallItemBuy >*
ShopInfo::mutable_fastbuy_time() {
  return &fastbuy_time_;
}

// -------------------------------------------------------------------

// DBShopItem

// optional int32 id = 1;
inline bool DBShopItem::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DBShopItem::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DBShopItem::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DBShopItem::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 DBShopItem::id() const {
  return id_;
}
inline void DBShopItem::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 buy_times = 2;
inline bool DBShopItem::has_buy_times() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DBShopItem::set_has_buy_times() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DBShopItem::clear_has_buy_times() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DBShopItem::clear_buy_times() {
  buy_times_ = 0;
  clear_has_buy_times();
}
inline ::google::protobuf::int32 DBShopItem::buy_times() const {
  return buy_times_;
}
inline void DBShopItem::set_buy_times(::google::protobuf::int32 value) {
  set_has_buy_times();
  buy_times_ = value;
}

// optional int32 sell_times = 3;
inline bool DBShopItem::has_sell_times() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DBShopItem::set_has_sell_times() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DBShopItem::clear_has_sell_times() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DBShopItem::clear_sell_times() {
  sell_times_ = 0;
  clear_has_sell_times();
}
inline ::google::protobuf::int32 DBShopItem::sell_times() const {
  return sell_times_;
}
inline void DBShopItem::set_sell_times(::google::protobuf::int32 value) {
  set_has_sell_times();
  sell_times_ = value;
}

// optional int32 price = 4;
inline bool DBShopItem::has_price() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DBShopItem::set_has_price() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DBShopItem::clear_has_price() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DBShopItem::clear_price() {
  price_ = 0;
  clear_has_price();
}
inline ::google::protobuf::int32 DBShopItem::price() const {
  return price_;
}
inline void DBShopItem::set_price(::google::protobuf::int32 value) {
  set_has_price();
  price_ = value;
}

// -------------------------------------------------------------------

// DBShopIntegral

// optional int32 id = 1;
inline bool DBShopIntegral::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DBShopIntegral::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DBShopIntegral::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DBShopIntegral::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 DBShopIntegral::id() const {
  return id_;
}
inline void DBShopIntegral::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 buy_times = 2;
inline bool DBShopIntegral::has_buy_times() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DBShopIntegral::set_has_buy_times() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DBShopIntegral::clear_has_buy_times() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DBShopIntegral::clear_buy_times() {
  buy_times_ = 0;
  clear_has_buy_times();
}
inline ::google::protobuf::int32 DBShopIntegral::buy_times() const {
  return buy_times_;
}
inline void DBShopIntegral::set_buy_times(::google::protobuf::int32 value) {
  set_has_buy_times();
  buy_times_ = value;
}

// optional int32 price = 3;
inline bool DBShopIntegral::has_price() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DBShopIntegral::set_has_price() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DBShopIntegral::clear_has_price() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DBShopIntegral::clear_price() {
  price_ = 0;
  clear_has_price();
}
inline ::google::protobuf::int32 DBShopIntegral::price() const {
  return price_;
}
inline void DBShopIntegral::set_price(::google::protobuf::int32 value) {
  set_has_price();
  price_ = value;
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

#endif  // PROTOBUF_db_5fshop_2eproto__INCLUDED