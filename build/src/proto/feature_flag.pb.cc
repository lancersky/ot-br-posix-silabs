// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: feature_flag.proto

#include "feature_flag.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace otbr {
PROTOBUF_CONSTEXPR FeatureFlagList::FeatureFlagList(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.enable_nat64_)*/false
  , /*decltype(_impl_.enable_detailed_logging_)*/false
  , /*decltype(_impl_.enable_trel_)*/false
  , /*decltype(_impl_.enable_dns_upstream_query_)*/false
  , /*decltype(_impl_.enable_dhcp6_pd_)*/false
  , /*decltype(_impl_.enable_link_metrics_manager_)*/false
  , /*decltype(_impl_.detailed_logging_level_)*/7} {}
struct FeatureFlagListDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FeatureFlagListDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FeatureFlagListDefaultTypeInternal() {}
  union {
    FeatureFlagList _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FeatureFlagListDefaultTypeInternal _FeatureFlagList_default_instance_;
}  // namespace otbr
namespace otbr {
bool ProtoLogLevel_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ProtoLogLevel_strings[9] = {};

static const char ProtoLogLevel_names[] =
  "PROTO_LOG_ALERT"
  "PROTO_LOG_CRIT"
  "PROTO_LOG_DEBUG"
  "PROTO_LOG_EMERG"
  "PROTO_LOG_ERR"
  "PROTO_LOG_INFO"
  "PROTO_LOG_NOTICE"
  "PROTO_LOG_UNSPECIFIED"
  "PROTO_LOG_WARNING";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ProtoLogLevel_entries[] = {
  { {ProtoLogLevel_names + 0, 15}, 2 },
  { {ProtoLogLevel_names + 15, 14}, 3 },
  { {ProtoLogLevel_names + 29, 15}, 8 },
  { {ProtoLogLevel_names + 44, 15}, 1 },
  { {ProtoLogLevel_names + 59, 13}, 4 },
  { {ProtoLogLevel_names + 72, 14}, 7 },
  { {ProtoLogLevel_names + 86, 16}, 6 },
  { {ProtoLogLevel_names + 102, 21}, 0 },
  { {ProtoLogLevel_names + 123, 17}, 5 },
};

static const int ProtoLogLevel_entries_by_number[] = {
  7, // 0 -> PROTO_LOG_UNSPECIFIED
  3, // 1 -> PROTO_LOG_EMERG
  0, // 2 -> PROTO_LOG_ALERT
  1, // 3 -> PROTO_LOG_CRIT
  4, // 4 -> PROTO_LOG_ERR
  8, // 5 -> PROTO_LOG_WARNING
  6, // 6 -> PROTO_LOG_NOTICE
  5, // 7 -> PROTO_LOG_INFO
  2, // 8 -> PROTO_LOG_DEBUG
};

const std::string& ProtoLogLevel_Name(
    ProtoLogLevel value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ProtoLogLevel_entries,
          ProtoLogLevel_entries_by_number,
          9, ProtoLogLevel_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ProtoLogLevel_entries,
      ProtoLogLevel_entries_by_number,
      9, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ProtoLogLevel_strings[idx].get();
}
bool ProtoLogLevel_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ProtoLogLevel* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ProtoLogLevel_entries, 9, name, &int_value);
  if (success) {
    *value = static_cast<ProtoLogLevel>(int_value);
  }
  return success;
}

// ===================================================================

class FeatureFlagList::_Internal {
 public:
  using HasBits = decltype(std::declval<FeatureFlagList>()._impl_._has_bits_);
  static void set_has_enable_nat64(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_enable_detailed_logging(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_detailed_logging_level(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_enable_trel(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_enable_dns_upstream_query(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_enable_dhcp6_pd(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_enable_link_metrics_manager(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

FeatureFlagList::FeatureFlagList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:otbr.FeatureFlagList)
}
FeatureFlagList::FeatureFlagList(const FeatureFlagList& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  FeatureFlagList* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.enable_nat64_){}
    , decltype(_impl_.enable_detailed_logging_){}
    , decltype(_impl_.enable_trel_){}
    , decltype(_impl_.enable_dns_upstream_query_){}
    , decltype(_impl_.enable_dhcp6_pd_){}
    , decltype(_impl_.enable_link_metrics_manager_){}
    , decltype(_impl_.detailed_logging_level_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.enable_nat64_, &from._impl_.enable_nat64_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.detailed_logging_level_) -
    reinterpret_cast<char*>(&_impl_.enable_nat64_)) + sizeof(_impl_.detailed_logging_level_));
  // @@protoc_insertion_point(copy_constructor:otbr.FeatureFlagList)
}

inline void FeatureFlagList::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.enable_nat64_){false}
    , decltype(_impl_.enable_detailed_logging_){false}
    , decltype(_impl_.enable_trel_){false}
    , decltype(_impl_.enable_dns_upstream_query_){false}
    , decltype(_impl_.enable_dhcp6_pd_){false}
    , decltype(_impl_.enable_link_metrics_manager_){false}
    , decltype(_impl_.detailed_logging_level_){7}
  };
}

FeatureFlagList::~FeatureFlagList() {
  // @@protoc_insertion_point(destructor:otbr.FeatureFlagList)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FeatureFlagList::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FeatureFlagList::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FeatureFlagList::Clear() {
// @@protoc_insertion_point(message_clear_start:otbr.FeatureFlagList)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    ::memset(&_impl_.enable_nat64_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.enable_link_metrics_manager_) -
        reinterpret_cast<char*>(&_impl_.enable_nat64_)) + sizeof(_impl_.enable_link_metrics_manager_));
    _impl_.detailed_logging_level_ = 7;
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FeatureFlagList::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bool enable_nat64 = 1 [default = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_enable_nat64(&has_bits);
          _impl_.enable_nat64_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool enable_detailed_logging = 2 [default = false];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_enable_detailed_logging(&has_bits);
          _impl_.enable_detailed_logging_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .otbr.ProtoLogLevel detailed_logging_level = 3 [default = PROTO_LOG_INFO];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::otbr::ProtoLogLevel_IsValid(val))) {
            _internal_set_detailed_logging_level(static_cast<::otbr::ProtoLogLevel>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional bool enable_trel = 4 [default = false];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_enable_trel(&has_bits);
          _impl_.enable_trel_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool enable_dns_upstream_query = 5 [default = false];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_enable_dns_upstream_query(&has_bits);
          _impl_.enable_dns_upstream_query_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool enable_dhcp6_pd = 6 [default = false];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_enable_dhcp6_pd(&has_bits);
          _impl_.enable_dhcp6_pd_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool enable_link_metrics_manager = 7 [default = false];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_enable_link_metrics_manager(&has_bits);
          _impl_.enable_link_metrics_manager_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FeatureFlagList::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:otbr.FeatureFlagList)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bool enable_nat64 = 1 [default = false];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_enable_nat64(), target);
  }

  // optional bool enable_detailed_logging = 2 [default = false];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_enable_detailed_logging(), target);
  }

  // optional .otbr.ProtoLogLevel detailed_logging_level = 3 [default = PROTO_LOG_INFO];
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_detailed_logging_level(), target);
  }

  // optional bool enable_trel = 4 [default = false];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_enable_trel(), target);
  }

  // optional bool enable_dns_upstream_query = 5 [default = false];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_enable_dns_upstream_query(), target);
  }

  // optional bool enable_dhcp6_pd = 6 [default = false];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(6, this->_internal_enable_dhcp6_pd(), target);
  }

  // optional bool enable_link_metrics_manager = 7 [default = false];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(7, this->_internal_enable_link_metrics_manager(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:otbr.FeatureFlagList)
  return target;
}

size_t FeatureFlagList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:otbr.FeatureFlagList)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional bool enable_nat64 = 1 [default = false];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // optional bool enable_detailed_logging = 2 [default = false];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool enable_trel = 4 [default = false];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional bool enable_dns_upstream_query = 5 [default = false];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional bool enable_dhcp6_pd = 6 [default = false];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

    // optional bool enable_link_metrics_manager = 7 [default = false];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

    // optional .otbr.ProtoLogLevel detailed_logging_level = 3 [default = PROTO_LOG_INFO];
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_detailed_logging_level());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FeatureFlagList::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FeatureFlagList*>(
      &from));
}

void FeatureFlagList::MergeFrom(const FeatureFlagList& from) {
  FeatureFlagList* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:otbr.FeatureFlagList)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.enable_nat64_ = from._impl_.enable_nat64_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.enable_detailed_logging_ = from._impl_.enable_detailed_logging_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.enable_trel_ = from._impl_.enable_trel_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.enable_dns_upstream_query_ = from._impl_.enable_dns_upstream_query_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.enable_dhcp6_pd_ = from._impl_.enable_dhcp6_pd_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.enable_link_metrics_manager_ = from._impl_.enable_link_metrics_manager_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.detailed_logging_level_ = from._impl_.detailed_logging_level_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FeatureFlagList::CopyFrom(const FeatureFlagList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:otbr.FeatureFlagList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeatureFlagList::IsInitialized() const {
  return true;
}

void FeatureFlagList::InternalSwap(FeatureFlagList* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FeatureFlagList, _impl_.enable_link_metrics_manager_)
      + sizeof(FeatureFlagList::_impl_.enable_link_metrics_manager_)
      - PROTOBUF_FIELD_OFFSET(FeatureFlagList, _impl_.enable_nat64_)>(
          reinterpret_cast<char*>(&_impl_.enable_nat64_),
          reinterpret_cast<char*>(&other->_impl_.enable_nat64_));
  swap(_impl_.detailed_logging_level_, other->_impl_.detailed_logging_level_);
}

std::string FeatureFlagList::GetTypeName() const {
  return "otbr.FeatureFlagList";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace otbr
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::otbr::FeatureFlagList*
Arena::CreateMaybeMessage< ::otbr::FeatureFlagList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::otbr::FeatureFlagList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
