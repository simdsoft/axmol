// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CSLANGUAGEDATABINARY_FLATBUFFERS_H_
#define FLATBUFFERS_GENERATED_CSLANGUAGEDATABINARY_FLATBUFFERS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 12 &&
              FLATBUFFERS_VERSION_REVISION == 23,
             "Non-compatible flatbuffers version included");

namespace flatbuffers {

struct LanguageItem;
struct LanguageItemBuilder;

struct LanguageSet;
struct LanguageSetBuilder;

struct LanguageItem FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef LanguageItemBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_KEY = 4,
    VT_VALUE = 6
  };
  const ::flatbuffers::String *key() const {
    return GetPointer<const ::flatbuffers::String *>(VT_KEY);
  }
  const ::flatbuffers::String *value() const {
    return GetPointer<const ::flatbuffers::String *>(VT_VALUE);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_KEY) &&
           verifier.VerifyString(key()) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyString(value()) &&
           verifier.EndTable();
  }
};

struct LanguageItemBuilder {
  typedef LanguageItem Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_key(::flatbuffers::Offset<::flatbuffers::String> key) {
    fbb_.AddOffset(LanguageItem::VT_KEY, key);
  }
  void add_value(::flatbuffers::Offset<::flatbuffers::String> value) {
    fbb_.AddOffset(LanguageItem::VT_VALUE, value);
  }
  explicit LanguageItemBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<LanguageItem> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<LanguageItem>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<LanguageItem> CreateLanguageItem(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> key = 0,
    ::flatbuffers::Offset<::flatbuffers::String> value = 0) {
  LanguageItemBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_key(key);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<LanguageItem> CreateLanguageItemDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *key = nullptr,
    const char *value = nullptr) {
  auto key__ = key ? _fbb.CreateString(key) : 0;
  auto value__ = value ? _fbb.CreateString(value) : 0;
  return flatbuffers::CreateLanguageItem(
      _fbb,
      key__,
      value__);
}

struct LanguageSet FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef LanguageSetBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LANGUAGEITEMS = 4
  };
  const ::flatbuffers::Vector<::flatbuffers::Offset<flatbuffers::LanguageItem>> *languageItems() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<flatbuffers::LanguageItem>> *>(VT_LANGUAGEITEMS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LANGUAGEITEMS) &&
           verifier.VerifyVector(languageItems()) &&
           verifier.VerifyVectorOfTables(languageItems()) &&
           verifier.EndTable();
  }
};

struct LanguageSetBuilder {
  typedef LanguageSet Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_languageItems(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<flatbuffers::LanguageItem>>> languageItems) {
    fbb_.AddOffset(LanguageSet::VT_LANGUAGEITEMS, languageItems);
  }
  explicit LanguageSetBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<LanguageSet> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<LanguageSet>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<LanguageSet> CreateLanguageSet(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<flatbuffers::LanguageItem>>> languageItems = 0) {
  LanguageSetBuilder builder_(_fbb);
  builder_.add_languageItems(languageItems);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<LanguageSet> CreateLanguageSetDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<::flatbuffers::Offset<flatbuffers::LanguageItem>> *languageItems = nullptr) {
  auto languageItems__ = languageItems ? _fbb.CreateVector<::flatbuffers::Offset<flatbuffers::LanguageItem>>(*languageItems) : 0;
  return flatbuffers::CreateLanguageSet(
      _fbb,
      languageItems__);
}

inline const flatbuffers::LanguageSet *GetLanguageSet(const void *buf) {
  return ::flatbuffers::GetRoot<flatbuffers::LanguageSet>(buf);
}

inline const flatbuffers::LanguageSet *GetSizePrefixedLanguageSet(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<flatbuffers::LanguageSet>(buf);
}

inline bool VerifyLanguageSetBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<flatbuffers::LanguageSet>(nullptr);
}

inline bool VerifySizePrefixedLanguageSetBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<flatbuffers::LanguageSet>(nullptr);
}

inline void FinishLanguageSetBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<flatbuffers::LanguageSet> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedLanguageSetBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<flatbuffers::LanguageSet> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flatbuffers

#endif  // FLATBUFFERS_GENERATED_CSLANGUAGEDATABINARY_FLATBUFFERS_H_
