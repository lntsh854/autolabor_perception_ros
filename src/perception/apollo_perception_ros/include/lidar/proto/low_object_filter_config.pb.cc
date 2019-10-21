// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: low_object_filter_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "low_object_filter_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo_perception_standalone {
namespace low_object_filter_config {
class ModelConfigsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ModelConfigs> {
} _ModelConfigs_default_instance_;

namespace protobuf_low_5fobject_5ffilter_5fconfig_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModelConfigs, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModelConfigs, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModelConfigs, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModelConfigs, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModelConfigs, object_height_threshold_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ModelConfigs, object_position_height_threshold_),
  0,
  1,
  2,
  3,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 9, sizeof(ModelConfigs)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ModelConfigs_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "low_object_filter_config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _ModelConfigs_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  ModelConfigs::_default_name_.Shutdown();
  ModelConfigs::_default_version_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ModelConfigs::_default_name_.DefaultConstruct();
  *ModelConfigs::_default_name_.get_mutable() = ::std::string("LowObjectFilter", 15);
  ModelConfigs::_default_version_.DefaultConstruct();
  *ModelConfigs::_default_version_.get_mutable() = ::std::string("1.0.0", 5);
  _ModelConfigs_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\036low_object_filter_config.proto\0225apollo"
      "_perception_standalone.low_object_filter"
      "_config\"\233\001\n\014ModelConfigs\022\035\n\004name\030\001 \001(\t:\017"
      "LowObjectFilter\022\026\n\007version\030\002 \001(\t:\0051.0.0\022"
      "$\n\027object_height_threshold\030\003 \001(\001:\0030.1\022.\n"
      " object_position_height_threshold\030\004 \001(\001:"
      "\004-1.6"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 245);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "low_object_filter_config.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_low_5fobject_5ffilter_5fconfig_2eproto


// ===================================================================

::google::protobuf::internal::ExplicitlyConstructed< ::std::string> ModelConfigs::_default_name_;
::google::protobuf::internal::ExplicitlyConstructed< ::std::string> ModelConfigs::_default_version_;
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ModelConfigs::kNameFieldNumber;
const int ModelConfigs::kVersionFieldNumber;
const int ModelConfigs::kObjectHeightThresholdFieldNumber;
const int ModelConfigs::kObjectPositionHeightThresholdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ModelConfigs::ModelConfigs()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_low_5fobject_5ffilter_5fconfig_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
}
ModelConfigs::ModelConfigs(const ModelConfigs& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&ModelConfigs::_default_name_.get());
  if (from.has_name()) {
    name_.AssignWithDefault(&ModelConfigs::_default_name_.get(), from.name_);
  }
  version_.UnsafeSetDefault(&ModelConfigs::_default_version_.get());
  if (from.has_version()) {
    version_.AssignWithDefault(&ModelConfigs::_default_version_.get(), from.version_);
  }
  ::memcpy(&object_height_threshold_, &from.object_height_threshold_,
    reinterpret_cast<char*>(&object_position_height_threshold_) -
    reinterpret_cast<char*>(&object_height_threshold_) + sizeof(object_position_height_threshold_));
  // @@protoc_insertion_point(copy_constructor:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
}

void ModelConfigs::SharedCtor() {
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&ModelConfigs::_default_name_.get());
  version_.UnsafeSetDefault(&ModelConfigs::_default_version_.get());
  object_height_threshold_ = 0.1;
  object_position_height_threshold_ = -1.6;
}

ModelConfigs::~ModelConfigs() {
  // @@protoc_insertion_point(destructor:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  SharedDtor();
}

void ModelConfigs::SharedDtor() {
  name_.DestroyNoArena(&ModelConfigs::_default_name_.get());
  version_.DestroyNoArena(&ModelConfigs::_default_version_.get());
}

void ModelConfigs::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ModelConfigs::descriptor() {
  protobuf_low_5fobject_5ffilter_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_low_5fobject_5ffilter_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ModelConfigs& ModelConfigs::default_instance() {
  protobuf_low_5fobject_5ffilter_5fconfig_2eproto::InitDefaults();
  return *internal_default_instance();
}

ModelConfigs* ModelConfigs::New(::google::protobuf::Arena* arena) const {
  ModelConfigs* n = new ModelConfigs;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ModelConfigs::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_name()) {
      GOOGLE_DCHECK(!name_.IsDefault(&ModelConfigs::_default_name_.get()));
      (*name_.UnsafeRawStringPointer())->assign(*&ModelConfigs::_default_name_.get());
    }
    if (has_version()) {
      GOOGLE_DCHECK(!version_.IsDefault(&ModelConfigs::_default_version_.get()));
      (*version_.UnsafeRawStringPointer())->assign(*&ModelConfigs::_default_version_.get());
    }
    object_height_threshold_ = 0.1;
    object_position_height_threshold_ = -1.6;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ModelConfigs::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1 [default = "LowObjectFilter"];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo_perception_standalone.low_object_filter_config.ModelConfigs.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string version = 2 [default = "1.0.0"];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->version().data(), this->version().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo_perception_standalone.low_object_filter_config.ModelConfigs.version");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double object_height_threshold = 3 [default = 0.1];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u)) {
          set_has_object_height_threshold();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &object_height_threshold_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double object_position_height_threshold = 4 [default = -1.6];
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u)) {
          set_has_object_position_height_threshold();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &object_position_height_threshold_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  return false;
#undef DO_
}

void ModelConfigs::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1 [default = "LowObjectFilter"];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo_perception_standalone.low_object_filter_config.ModelConfigs.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string version = 2 [default = "1.0.0"];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->version().data(), this->version().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo_perception_standalone.low_object_filter_config.ModelConfigs.version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->version(), output);
  }

  // optional double object_height_threshold = 3 [default = 0.1];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->object_height_threshold(), output);
  }

  // optional double object_position_height_threshold = 4 [default = -1.6];
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->object_position_height_threshold(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
}

::google::protobuf::uint8* ModelConfigs::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1 [default = "LowObjectFilter"];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo_perception_standalone.low_object_filter_config.ModelConfigs.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string version = 2 [default = "1.0.0"];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->version().data(), this->version().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo_perception_standalone.low_object_filter_config.ModelConfigs.version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->version(), target);
  }

  // optional double object_height_threshold = 3 [default = 0.1];
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->object_height_threshold(), target);
  }

  // optional double object_position_height_threshold = 4 [default = -1.6];
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->object_position_height_threshold(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  return target;
}

size_t ModelConfigs::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional string name = 1 [default = "LowObjectFilter"];
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string version = 2 [default = "1.0.0"];
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->version());
    }

    // optional double object_height_threshold = 3 [default = 0.1];
    if (has_object_height_threshold()) {
      total_size += 1 + 8;
    }

    // optional double object_position_height_threshold = 4 [default = -1.6];
    if (has_object_position_height_threshold()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ModelConfigs::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  GOOGLE_DCHECK_NE(&from, this);
  const ModelConfigs* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ModelConfigs>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
    MergeFrom(*source);
  }
}

void ModelConfigs::MergeFrom(const ModelConfigs& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&ModelConfigs::_default_name_.get(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_version();
      version_.AssignWithDefault(&ModelConfigs::_default_version_.get(), from.version_);
    }
    if (cached_has_bits & 0x00000004u) {
      object_height_threshold_ = from.object_height_threshold_;
    }
    if (cached_has_bits & 0x00000008u) {
      object_position_height_threshold_ = from.object_position_height_threshold_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ModelConfigs::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ModelConfigs::CopyFrom(const ModelConfigs& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo_perception_standalone.low_object_filter_config.ModelConfigs)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModelConfigs::IsInitialized() const {
  return true;
}

void ModelConfigs::Swap(ModelConfigs* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ModelConfigs::InternalSwap(ModelConfigs* other) {
  name_.Swap(&other->name_);
  version_.Swap(&other->version_);
  std::swap(object_height_threshold_, other->object_height_threshold_);
  std::swap(object_position_height_threshold_, other->object_position_height_threshold_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ModelConfigs::GetMetadata() const {
  protobuf_low_5fobject_5ffilter_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_low_5fobject_5ffilter_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelConfigs

// optional string name = 1 [default = "LowObjectFilter"];
bool ModelConfigs::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ModelConfigs::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void ModelConfigs::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void ModelConfigs::clear_name() {
  name_.ClearToDefaultNoArena(&ModelConfigs::_default_name_.get());
  clear_has_name();
}
const ::std::string& ModelConfigs::name() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.low_object_filter_config.ModelConfigs.name)
  return name_.GetNoArena();
}
void ModelConfigs::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.low_object_filter_config.ModelConfigs.name)
}
#if LANG_CXX11
void ModelConfigs::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &ModelConfigs::_default_name_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.low_object_filter_config.ModelConfigs.name)
}
#endif
void ModelConfigs::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.low_object_filter_config.ModelConfigs.name)
}
void ModelConfigs::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.low_object_filter_config.ModelConfigs.name)
}
::std::string* ModelConfigs::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.low_object_filter_config.ModelConfigs.name)
  return name_.MutableNoArena(&ModelConfigs::_default_name_.get());
}
::std::string* ModelConfigs::release_name() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.low_object_filter_config.ModelConfigs.name)
  clear_has_name();
  return name_.ReleaseNoArena(&ModelConfigs::_default_name_.get());
}
void ModelConfigs::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&ModelConfigs::_default_name_.get(), name);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.low_object_filter_config.ModelConfigs.name)
}

// optional string version = 2 [default = "1.0.0"];
bool ModelConfigs::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ModelConfigs::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
void ModelConfigs::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
void ModelConfigs::clear_version() {
  version_.ClearToDefaultNoArena(&ModelConfigs::_default_version_.get());
  clear_has_version();
}
const ::std::string& ModelConfigs::version() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.low_object_filter_config.ModelConfigs.version)
  return version_.GetNoArena();
}
void ModelConfigs::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.low_object_filter_config.ModelConfigs.version)
}
#if LANG_CXX11
void ModelConfigs::set_version(::std::string&& value) {
  set_has_version();
  version_.SetNoArena(
    &ModelConfigs::_default_version_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.low_object_filter_config.ModelConfigs.version)
}
#endif
void ModelConfigs::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.low_object_filter_config.ModelConfigs.version)
}
void ModelConfigs::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.low_object_filter_config.ModelConfigs.version)
}
::std::string* ModelConfigs::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.low_object_filter_config.ModelConfigs.version)
  return version_.MutableNoArena(&ModelConfigs::_default_version_.get());
}
::std::string* ModelConfigs::release_version() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.low_object_filter_config.ModelConfigs.version)
  clear_has_version();
  return version_.ReleaseNoArena(&ModelConfigs::_default_version_.get());
}
void ModelConfigs::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(&ModelConfigs::_default_version_.get(), version);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.low_object_filter_config.ModelConfigs.version)
}

// optional double object_height_threshold = 3 [default = 0.1];
bool ModelConfigs::has_object_height_threshold() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ModelConfigs::set_has_object_height_threshold() {
  _has_bits_[0] |= 0x00000004u;
}
void ModelConfigs::clear_has_object_height_threshold() {
  _has_bits_[0] &= ~0x00000004u;
}
void ModelConfigs::clear_object_height_threshold() {
  object_height_threshold_ = 0.1;
  clear_has_object_height_threshold();
}
double ModelConfigs::object_height_threshold() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.low_object_filter_config.ModelConfigs.object_height_threshold)
  return object_height_threshold_;
}
void ModelConfigs::set_object_height_threshold(double value) {
  set_has_object_height_threshold();
  object_height_threshold_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.low_object_filter_config.ModelConfigs.object_height_threshold)
}

// optional double object_position_height_threshold = 4 [default = -1.6];
bool ModelConfigs::has_object_position_height_threshold() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ModelConfigs::set_has_object_position_height_threshold() {
  _has_bits_[0] |= 0x00000008u;
}
void ModelConfigs::clear_has_object_position_height_threshold() {
  _has_bits_[0] &= ~0x00000008u;
}
void ModelConfigs::clear_object_position_height_threshold() {
  object_position_height_threshold_ = -1.6;
  clear_has_object_position_height_threshold();
}
double ModelConfigs::object_position_height_threshold() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.low_object_filter_config.ModelConfigs.object_position_height_threshold)
  return object_position_height_threshold_;
}
void ModelConfigs::set_object_position_height_threshold(double value) {
  set_has_object_position_height_threshold();
  object_position_height_threshold_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.low_object_filter_config.ModelConfigs.object_position_height_threshold)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace low_object_filter_config
}  // namespace apollo_perception_standalone

// @@protoc_insertion_point(global_scope)