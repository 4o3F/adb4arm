// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_processes.proto

#include "app_processes.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_app_5fprocesses_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ProcessEntry_app_5fprocesses_2eproto;
namespace adb {
namespace proto {
class ProcessEntryDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ProcessEntry> _instance;
} _ProcessEntry_default_instance_;
class AppProcessesDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AppProcesses> _instance;
} _AppProcesses_default_instance_;
}  // namespace proto
}  // namespace adb
static void InitDefaultsscc_info_AppProcesses_app_5fprocesses_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::adb::proto::_AppProcesses_default_instance_;
    new (ptr) ::adb::proto::AppProcesses();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::adb::proto::AppProcesses::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_AppProcesses_app_5fprocesses_2eproto =
    {{{::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized}, 1, InitDefaultsscc_info_AppProcesses_app_5fprocesses_2eproto}, {
      &scc_info_ProcessEntry_app_5fprocesses_2eproto.base,}};

static void InitDefaultsscc_info_ProcessEntry_app_5fprocesses_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::adb::proto::_ProcessEntry_default_instance_;
    new (ptr) ::adb::proto::ProcessEntry();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::adb::proto::ProcessEntry::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ProcessEntry_app_5fprocesses_2eproto =
    {{{::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized}, 0, InitDefaultsscc_info_ProcessEntry_app_5fprocesses_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_app_5fprocesses_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_app_5fprocesses_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_app_5fprocesses_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_app_5fprocesses_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::adb::proto::ProcessEntry, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::adb::proto::ProcessEntry, pid_),
  PROTOBUF_FIELD_OFFSET(::adb::proto::ProcessEntry, debuggable_),
  PROTOBUF_FIELD_OFFSET(::adb::proto::ProcessEntry, profileable_),
  PROTOBUF_FIELD_OFFSET(::adb::proto::ProcessEntry, architecture_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::adb::proto::AppProcesses, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::adb::proto::AppProcesses, process_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::adb::proto::ProcessEntry)},
  { 9, -1, sizeof(::adb::proto::AppProcesses)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::adb::proto::_ProcessEntry_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::adb::proto::_AppProcesses_default_instance_),
};

const char descriptor_table_protodef_app_5fprocesses_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023app_processes.proto\022\tadb.proto\"Z\n\014Proc"
  "essEntry\022\013\n\003pid\030\001 \001(\003\022\022\n\ndebuggable\030\002 \001("
  "\010\022\023\n\013profileable\030\003 \001(\010\022\024\n\014architecture\030\004"
  " \001(\t\"8\n\014AppProcesses\022(\n\007process\030\001 \003(\0132\027."
  "adb.proto.ProcessEntryB2\n\035com.android.se"
  "rver.adb.protosB\021AppProcessesProtob\006prot"
  "o3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_app_5fprocesses_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_app_5fprocesses_2eproto_sccs[2] = {
  &scc_info_AppProcesses_app_5fprocesses_2eproto.base,
  &scc_info_ProcessEntry_app_5fprocesses_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_app_5fprocesses_2eproto_once;
static bool descriptor_table_app_5fprocesses_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_app_5fprocesses_2eproto = {
  &descriptor_table_app_5fprocesses_2eproto_initialized, descriptor_table_protodef_app_5fprocesses_2eproto, "app_processes.proto", 242,
  &descriptor_table_app_5fprocesses_2eproto_once, descriptor_table_app_5fprocesses_2eproto_sccs, descriptor_table_app_5fprocesses_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_app_5fprocesses_2eproto::offsets,
  file_level_metadata_app_5fprocesses_2eproto, 2, file_level_enum_descriptors_app_5fprocesses_2eproto, file_level_service_descriptors_app_5fprocesses_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_app_5fprocesses_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_app_5fprocesses_2eproto), true);
namespace adb {
namespace proto {

// ===================================================================

void ProcessEntry::InitAsDefaultInstance() {
}
class ProcessEntry::_Internal {
 public:
};

ProcessEntry::ProcessEntry()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:adb.proto.ProcessEntry)
}
ProcessEntry::ProcessEntry(const ProcessEntry& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  architecture_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from.architecture().empty()) {
    architecture_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.architecture_);
  }
  ::memcpy(&pid_, &from.pid_,
    static_cast<size_t>(reinterpret_cast<char*>(&profileable_) -
    reinterpret_cast<char*>(&pid_)) + sizeof(profileable_));
  // @@protoc_insertion_point(copy_constructor:adb.proto.ProcessEntry)
}

void ProcessEntry::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ProcessEntry_app_5fprocesses_2eproto.base);
  architecture_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&pid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&profileable_) -
      reinterpret_cast<char*>(&pid_)) + sizeof(profileable_));
}

ProcessEntry::~ProcessEntry() {
  // @@protoc_insertion_point(destructor:adb.proto.ProcessEntry)
  SharedDtor();
}

void ProcessEntry::SharedDtor() {
  architecture_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ProcessEntry::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ProcessEntry& ProcessEntry::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ProcessEntry_app_5fprocesses_2eproto.base);
  return *internal_default_instance();
}


void ProcessEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:adb.proto.ProcessEntry)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  architecture_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&pid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&profileable_) -
      reinterpret_cast<char*>(&pid_)) + sizeof(profileable_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ProcessEntry::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool debuggable = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          debuggable_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool profileable = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          profileable_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string architecture = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_architecture(), ptr, ctx, "adb.proto.ProcessEntry.architecture");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ProcessEntry::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:adb.proto.ProcessEntry)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 pid = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT64>(
                 input, &pid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool debuggable = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &debuggable_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool profileable = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &profileable_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string architecture = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_architecture()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->architecture().data(), static_cast<int>(this->architecture().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "adb.proto.ProcessEntry.architecture"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:adb.proto.ProcessEntry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:adb.proto.ProcessEntry)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ProcessEntry::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:adb.proto.ProcessEntry)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 pid = 1;
  if (this->pid() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64(1, this->pid(), output);
  }

  // bool debuggable = 2;
  if (this->debuggable() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(2, this->debuggable(), output);
  }

  // bool profileable = 3;
  if (this->profileable() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(3, this->profileable(), output);
  }

  // string architecture = 4;
  if (this->architecture().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->architecture().data(), static_cast<int>(this->architecture().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "adb.proto.ProcessEntry.architecture");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->architecture(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:adb.proto.ProcessEntry)
}

::PROTOBUF_NAMESPACE_ID::uint8* ProcessEntry::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:adb.proto.ProcessEntry)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 pid = 1;
  if (this->pid() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->pid(), target);
  }

  // bool debuggable = 2;
  if (this->debuggable() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->debuggable(), target);
  }

  // bool profileable = 3;
  if (this->profileable() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->profileable(), target);
  }

  // string architecture = 4;
  if (this->architecture().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->architecture().data(), static_cast<int>(this->architecture().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "adb.proto.ProcessEntry.architecture");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        4, this->architecture(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:adb.proto.ProcessEntry)
  return target;
}

size_t ProcessEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:adb.proto.ProcessEntry)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string architecture = 4;
  if (this->architecture().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->architecture());
  }

  // int64 pid = 1;
  if (this->pid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->pid());
  }

  // bool debuggable = 2;
  if (this->debuggable() != 0) {
    total_size += 1 + 1;
  }

  // bool profileable = 3;
  if (this->profileable() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProcessEntry::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:adb.proto.ProcessEntry)
  GOOGLE_DCHECK_NE(&from, this);
  const ProcessEntry* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ProcessEntry>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:adb.proto.ProcessEntry)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:adb.proto.ProcessEntry)
    MergeFrom(*source);
  }
}

void ProcessEntry::MergeFrom(const ProcessEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:adb.proto.ProcessEntry)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.architecture().size() > 0) {

    architecture_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.architecture_);
  }
  if (from.pid() != 0) {
    set_pid(from.pid());
  }
  if (from.debuggable() != 0) {
    set_debuggable(from.debuggable());
  }
  if (from.profileable() != 0) {
    set_profileable(from.profileable());
  }
}

void ProcessEntry::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:adb.proto.ProcessEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProcessEntry::CopyFrom(const ProcessEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:adb.proto.ProcessEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessEntry::IsInitialized() const {
  return true;
}

void ProcessEntry::InternalSwap(ProcessEntry* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  architecture_.Swap(&other->architecture_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pid_, other->pid_);
  swap(debuggable_, other->debuggable_);
  swap(profileable_, other->profileable_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProcessEntry::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void AppProcesses::InitAsDefaultInstance() {
}
class AppProcesses::_Internal {
 public:
};

AppProcesses::AppProcesses()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:adb.proto.AppProcesses)
}
AppProcesses::AppProcesses(const AppProcesses& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      process_(from.process_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:adb.proto.AppProcesses)
}

void AppProcesses::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_AppProcesses_app_5fprocesses_2eproto.base);
}

AppProcesses::~AppProcesses() {
  // @@protoc_insertion_point(destructor:adb.proto.AppProcesses)
  SharedDtor();
}

void AppProcesses::SharedDtor() {
}

void AppProcesses::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AppProcesses& AppProcesses::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AppProcesses_app_5fprocesses_2eproto.base);
  return *internal_default_instance();
}


void AppProcesses::Clear() {
// @@protoc_insertion_point(message_clear_start:adb.proto.AppProcesses)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  process_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* AppProcesses::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .adb.proto.ProcessEntry process = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_process(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 10);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool AppProcesses::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:adb.proto.AppProcesses)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .adb.proto.ProcessEntry process = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_process()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:adb.proto.AppProcesses)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:adb.proto.AppProcesses)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void AppProcesses::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:adb.proto.AppProcesses)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .adb.proto.ProcessEntry process = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->process_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->process(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:adb.proto.AppProcesses)
}

::PROTOBUF_NAMESPACE_ID::uint8* AppProcesses::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:adb.proto.AppProcesses)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .adb.proto.ProcessEntry process = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->process_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->process(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:adb.proto.AppProcesses)
  return target;
}

size_t AppProcesses::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:adb.proto.AppProcesses)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .adb.proto.ProcessEntry process = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->process_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->process(static_cast<int>(i)));
    }
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AppProcesses::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:adb.proto.AppProcesses)
  GOOGLE_DCHECK_NE(&from, this);
  const AppProcesses* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AppProcesses>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:adb.proto.AppProcesses)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:adb.proto.AppProcesses)
    MergeFrom(*source);
  }
}

void AppProcesses::MergeFrom(const AppProcesses& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:adb.proto.AppProcesses)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  process_.MergeFrom(from.process_);
}

void AppProcesses::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:adb.proto.AppProcesses)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AppProcesses::CopyFrom(const AppProcesses& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:adb.proto.AppProcesses)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppProcesses::IsInitialized() const {
  return true;
}

void AppProcesses::InternalSwap(AppProcesses* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&process_)->InternalSwap(CastToBase(&other->process_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AppProcesses::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace adb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::adb::proto::ProcessEntry* Arena::CreateMaybeMessage< ::adb::proto::ProcessEntry >(Arena* arena) {
  return Arena::CreateInternal< ::adb::proto::ProcessEntry >(arena);
}
template<> PROTOBUF_NOINLINE ::adb::proto::AppProcesses* Arena::CreateMaybeMessage< ::adb::proto::AppProcesses >(Arena* arena) {
  return Arena::CreateInternal< ::adb::proto::AppProcesses >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
