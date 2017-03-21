/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/6_/yh4y_qmn6yl063d055613p94sbt0ls/T/bpeters/titaniumcomscore-android-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/6_/yh4y_qmn6yl063d055613p94sbt0ls/T/bpeters/titaniumcomscore-android-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.benjamin.comscore.ExampleProxy.h"
#include "com.benjamin.comscore.TitaniumcomscoreAndroidModule.h"


#line 14 "/private/var/folders/6_/yh4y_qmn6yl063d055613p94sbt0ls/T/bpeters/titaniumcomscore-android-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 18, duplicates = 0 */

class TitaniumcomscoreAndroidBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TitaniumcomscoreAndroidBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TitaniumcomscoreAndroidBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 34,
      MAX_WORD_LENGTH = 51,
      MIN_HASH_VALUE = 34,
      MAX_HASH_VALUE = 51
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/6_/yh4y_qmn6yl063d055613p94sbt0ls/T/bpeters/titaniumcomscore-android-generated/KrollGeneratedBindings.gperf"
      {"com.benjamin.comscore.ExampleProxy", ::com::benjamin::comscore::titaniumcomscoreandroid::ExampleProxy::bindProxy, ::com::benjamin::comscore::titaniumcomscoreandroid::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/6_/yh4y_qmn6yl063d055613p94sbt0ls/T/bpeters/titaniumcomscore-android-generated/KrollGeneratedBindings.gperf"
      {"com.benjamin.comscore.TitaniumcomscoreAndroidModule", ::com::benjamin::comscore::TitaniumcomscoreAndroidModule::bindProxy, ::com::benjamin::comscore::TitaniumcomscoreAndroidModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/6_/yh4y_qmn6yl063d055613p94sbt0ls/T/bpeters/titaniumcomscore-android-generated/KrollGeneratedBindings.gperf"

