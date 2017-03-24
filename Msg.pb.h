// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg.proto

#ifndef PROTOBUF_Msg_2eproto__INCLUDED
#define PROTOBUF_Msg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class Msg;
class MsgDefaultTypeInternal;
extern MsgDefaultTypeInternal _Msg_default_instance_;

namespace protobuf_Msg_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_Msg_2eproto

// ===================================================================

class Msg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Msg) */ {
 public:
  Msg();
  virtual ~Msg();

  Msg(const Msg& from);

  inline Msg& operator=(const Msg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Msg& default_instance();

  static inline const Msg* internal_default_instance() {
    return reinterpret_cast<const Msg*>(
               &_Msg_default_instance_);
  }

  void Swap(Msg* other);

  // implements Message ----------------------------------------------

  inline Msg* New() const PROTOBUF_FINAL { return New(NULL); }

  Msg* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Msg& from);
  void MergeFrom(const Msg& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Msg* other);
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

  // required string content = 2;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 2;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // required int32 type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // optional int32 userId = 3;
  bool has_userid() const;
  void clear_userid();
  static const int kUserIdFieldNumber = 3;
  ::google::protobuf::int32 userid() const;
  void set_userid(::google::protobuf::int32 value);

  // optional int64 time = 4;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 4;
  ::google::protobuf::int64 time() const;
  void set_time(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Msg)
 private:
  void set_has_type();
  void clear_has_type();
  void set_has_content();
  void clear_has_content();
  void set_has_userid();
  void clear_has_userid();
  void set_has_time();
  void clear_has_time();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 userid_;
  ::google::protobuf::int64 time_;
  friend struct  protobuf_Msg_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Msg

// required int32 type = 1;
inline bool Msg::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Msg::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Msg::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Msg::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 Msg::type() const {
  // @@protoc_insertion_point(field_get:Msg.type)
  return type_;
}
inline void Msg::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:Msg.type)
}

// required string content = 2;
inline bool Msg::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Msg::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Msg::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Msg::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& Msg::content() const {
  // @@protoc_insertion_point(field_get:Msg.content)
  return content_.GetNoArena();
}
inline void Msg::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Msg.content)
}
#if LANG_CXX11
inline void Msg::set_content(::std::string&& value) {
  set_has_content();
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Msg.content)
}
#endif
inline void Msg::set_content(const char* value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Msg.content)
}
inline void Msg::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Msg.content)
}
inline ::std::string* Msg::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:Msg.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Msg::release_content() {
  // @@protoc_insertion_point(field_release:Msg.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Msg::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:Msg.content)
}

// optional int32 userId = 3;
inline bool Msg::has_userid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Msg::set_has_userid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Msg::clear_has_userid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Msg::clear_userid() {
  userid_ = 0;
  clear_has_userid();
}
inline ::google::protobuf::int32 Msg::userid() const {
  // @@protoc_insertion_point(field_get:Msg.userId)
  return userid_;
}
inline void Msg::set_userid(::google::protobuf::int32 value) {
  set_has_userid();
  userid_ = value;
  // @@protoc_insertion_point(field_set:Msg.userId)
}

// optional int64 time = 4;
inline bool Msg::has_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Msg::set_has_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Msg::clear_has_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Msg::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::int64 Msg::time() const {
  // @@protoc_insertion_point(field_get:Msg.time)
  return time_;
}
inline void Msg::set_time(::google::protobuf::int64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:Msg.time)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Msg_2eproto__INCLUDED
