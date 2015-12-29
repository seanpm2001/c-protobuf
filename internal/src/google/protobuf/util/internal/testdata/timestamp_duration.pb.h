// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/timestamp_duration.proto

#ifndef PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/timestamp.pb.h"
#include "google/protobuf/duration.pb.h"
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace testing {
namespace timestampduration {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto();

class TimestampDuration;

// ===================================================================

class TimestampDuration : public ::google::protobuf::Message {
 public:
  TimestampDuration();
  virtual ~TimestampDuration();

  TimestampDuration(const TimestampDuration& from);

  inline TimestampDuration& operator=(const TimestampDuration& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TimestampDuration& default_instance();

  void Swap(TimestampDuration* other);

  // implements Message ----------------------------------------------

  inline TimestampDuration* New() const { return New(NULL); }

  TimestampDuration* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TimestampDuration& from);
  void MergeFrom(const TimestampDuration& from);
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
  void InternalSwap(TimestampDuration* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .google.protobuf.Timestamp ts = 1;
  bool has_ts() const;
  void clear_ts();
  static const int kTsFieldNumber = 1;
  const ::google::protobuf::Timestamp& ts() const;
  ::google::protobuf::Timestamp* mutable_ts();
  ::google::protobuf::Timestamp* release_ts();
  void set_allocated_ts(::google::protobuf::Timestamp* ts);

  // optional .google.protobuf.Duration dur = 2;
  bool has_dur() const;
  void clear_dur();
  static const int kDurFieldNumber = 2;
  const ::google::protobuf::Duration& dur() const;
  ::google::protobuf::Duration* mutable_dur();
  ::google::protobuf::Duration* release_dur();
  void set_allocated_dur(::google::protobuf::Duration* dur);

  // @@protoc_insertion_point(class_scope:google.protobuf.testing.timestampduration.TimestampDuration)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::Timestamp* ts_;
  ::google::protobuf::Duration* dur_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto();

  void InitAsDefaultInstance();
  static TimestampDuration* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TimestampDuration

// optional .google.protobuf.Timestamp ts = 1;
inline bool TimestampDuration::has_ts() const {
  return !_is_default_instance_ && ts_ != NULL;
}
inline void TimestampDuration::clear_ts() {
  if (GetArenaNoVirtual() == NULL && ts_ != NULL) delete ts_;
  ts_ = NULL;
}
inline const ::google::protobuf::Timestamp& TimestampDuration::ts() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.timestampduration.TimestampDuration.ts)
  return ts_ != NULL ? *ts_ : *default_instance_->ts_;
}
inline ::google::protobuf::Timestamp* TimestampDuration::mutable_ts() {
  
  if (ts_ == NULL) {
    ts_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.timestampduration.TimestampDuration.ts)
  return ts_;
}
inline ::google::protobuf::Timestamp* TimestampDuration::release_ts() {
  
  ::google::protobuf::Timestamp* temp = ts_;
  ts_ = NULL;
  return temp;
}
inline void TimestampDuration::set_allocated_ts(::google::protobuf::Timestamp* ts) {
  delete ts_;
  ts_ = ts;
  if (ts) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.timestampduration.TimestampDuration.ts)
}

// optional .google.protobuf.Duration dur = 2;
inline bool TimestampDuration::has_dur() const {
  return !_is_default_instance_ && dur_ != NULL;
}
inline void TimestampDuration::clear_dur() {
  if (GetArenaNoVirtual() == NULL && dur_ != NULL) delete dur_;
  dur_ = NULL;
}
inline const ::google::protobuf::Duration& TimestampDuration::dur() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.timestampduration.TimestampDuration.dur)
  return dur_ != NULL ? *dur_ : *default_instance_->dur_;
}
inline ::google::protobuf::Duration* TimestampDuration::mutable_dur() {
  
  if (dur_ == NULL) {
    dur_ = new ::google::protobuf::Duration;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.timestampduration.TimestampDuration.dur)
  return dur_;
}
inline ::google::protobuf::Duration* TimestampDuration::release_dur() {
  
  ::google::protobuf::Duration* temp = dur_;
  dur_ = NULL;
  return temp;
}
inline void TimestampDuration::set_allocated_dur(::google::protobuf::Duration* dur) {
  delete dur_;
  dur_ = dur;
  if (dur) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.timestampduration.TimestampDuration.dur)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace timestampduration
}  // namespace testing
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2ftimestamp_5fduration_2eproto__INCLUDED
