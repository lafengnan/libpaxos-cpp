// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: paxos++/detail/protocol/pb/command.proto

#ifndef PROTOBUF_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto__INCLUDED
#define PROTOBUF_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace paxos {
namespace detail {
namespace protocol {
namespace pb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto();
void protobuf_AssignDesc_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto();
void protobuf_ShutdownFile_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto();

class command;

enum command_type {
  START_ELECTION = 0,
  MY_ELECTION_ID = 1,
  WON_ELECTION = 2
};
bool command_type_IsValid(int value);
const command_type command_type_MIN = START_ELECTION;
const command_type command_type_MAX = WON_ELECTION;
const int command_type_ARRAYSIZE = command_type_MAX + 1;

const ::google::protobuf::EnumDescriptor* command_type_descriptor();
inline const ::std::string& command_type_Name(command_type value) {
  return ::google::protobuf::internal::NameOfEnum(
    command_type_descriptor(), value);
}
inline bool command_type_Parse(
    const ::std::string& name, command_type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<command_type>(
    command_type_descriptor(), name, value);
}
// ===================================================================

class command : public ::google::protobuf::Message {
 public:
  command();
  virtual ~command();
  
  command(const command& from);
  
  inline command& operator=(const command& from) {
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
  static const command& default_instance();
  
  void Swap(command* other);
  
  // implements Message ----------------------------------------------
  
  command* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const command& from);
  void MergeFrom(const command& from);
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
  
  // optional .paxos.detail.protocol.pb.command_type type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline paxos::detail::protocol::pb::command_type type() const;
  inline void set_type(paxos::detail::protocol::pb::command_type value);
  
  // optional string host_id = 2;
  inline bool has_host_id() const;
  inline void clear_host_id();
  static const int kHostIdFieldNumber = 2;
  inline const ::std::string& host_id() const;
  inline void set_host_id(const ::std::string& value);
  inline void set_host_id(const char* value);
  inline void set_host_id(const char* value, size_t size);
  inline ::std::string* mutable_host_id();
  
  // @@protoc_insertion_point(class_scope:paxos.detail.protocol.pb.command)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  int type_;
  ::std::string* host_id_;
  static const ::std::string _default_host_id_;
  friend void  protobuf_AddDesc_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto();
  friend void protobuf_AssignDesc_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto();
  friend void protobuf_ShutdownFile_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static command* default_instance_;
};
// ===================================================================


// ===================================================================

// command

// optional .paxos.detail.protocol.pb.command_type type = 1;
inline bool command::has_type() const {
  return _has_bit(0);
}
inline void command::clear_type() {
  type_ = 0;
  _clear_bit(0);
}
inline paxos::detail::protocol::pb::command_type command::type() const {
  return static_cast< paxos::detail::protocol::pb::command_type >(type_);
}
inline void command::set_type(paxos::detail::protocol::pb::command_type value) {
  GOOGLE_DCHECK(paxos::detail::protocol::pb::command_type_IsValid(value));
  _set_bit(0);
  type_ = value;
}

// optional string host_id = 2;
inline bool command::has_host_id() const {
  return _has_bit(1);
}
inline void command::clear_host_id() {
  if (host_id_ != &_default_host_id_) {
    host_id_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& command::host_id() const {
  return *host_id_;
}
inline void command::set_host_id(const ::std::string& value) {
  _set_bit(1);
  if (host_id_ == &_default_host_id_) {
    host_id_ = new ::std::string;
  }
  host_id_->assign(value);
}
inline void command::set_host_id(const char* value) {
  _set_bit(1);
  if (host_id_ == &_default_host_id_) {
    host_id_ = new ::std::string;
  }
  host_id_->assign(value);
}
inline void command::set_host_id(const char* value, size_t size) {
  _set_bit(1);
  if (host_id_ == &_default_host_id_) {
    host_id_ = new ::std::string;
  }
  host_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* command::mutable_host_id() {
  _set_bit(1);
  if (host_id_ == &_default_host_id_) {
    host_id_ = new ::std::string;
  }
  return host_id_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace protocol
}  // namespace detail
}  // namespace paxos

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< paxos::detail::protocol::pb::command_type>() {
  return paxos::detail::protocol::pb::command_type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_paxos_2b_2b_2fdetail_2fprotocol_2fpb_2fcommand_2eproto__INCLUDED