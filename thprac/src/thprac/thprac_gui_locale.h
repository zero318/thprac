#pragma once
#include "thprac_locale_def.h"

template<size_t D0, size_t D1>
auto th_string_table_u8_convert(const char8_t* (&)[D0][D1]) -> const char* (&)[D0][D1];
template <size_t D0, size_t D1, size_t D2>
auto th_string_table_u8_convert(const char8_t* (&)[D0][D1][D2]) -> const char* (&)[D0][D1][D2];

namespace THPrac {
namespace Gui {
    enum locale_t {
        LOCALE_NONE = -1,
        LOCALE_ZH_CN = 0,
        LOCALE_EN_US = 1,
        LOCALE_JA_JP = 2,
    };
    //static locale_t __glocale_current = LOCALE_ZH_CN;

    void LocaleSet(locale_t locale);
    void LocaleAutoSet();
    locale_t LocaleGet();
    void LocaleRotate();
    bool LocaleInitFromCfg();

    bool LocaleCreateFont(float font_size);
    bool LocaleCreateMergeFont(locale_t locale, float font_size);
    bool LocaleRecreateMergeFont(locale_t locale, float font_size);
    void LocalePushFont();
    void LocalePopFont();

#define th_glossary_str ((decltype(th_string_table_u8_convert(th_glossary_str)))th_glossary_str)
#define th_sections_str ((decltype(th_string_table_u8_convert(th_sections_str)))th_sections_str)

#define XITEMS (th_glossary_str[::THPrac::Gui::LocaleGet()])
#define XSTR(name) (th_glossary_str[::THPrac::Gui::LocaleGet()][name])
#define XCBT(stage, type) th_sections_cbt[stage][type]
#define XCBA(stage, type) th_sections_cba[stage][type]
#define XSSS(rank) (th_sections_str[::THPrac::Gui::LocaleGet()][rank])
#define XSEC(is_cbt, stage, s1, s2) (is_cbt ? (s1 ? th_sections_cbt[stage][s1 - 1][s2] : 0) : (s1 ? th_sections_cba[stage][s1 - 1][s2] : 0))

}
}
