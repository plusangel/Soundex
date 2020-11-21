//
// Created by angelos on 14/11/2020.
//

#include "Soundex.h"
#include <gmock/gmock.h>

using namespace testing;

class SoundexEncoding : public Test {
public:
  Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
  ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}

TEST_F(SoundexEncoding, PadsWithZeroToEnsureThreeDigits) {
  ASSERT_THAT(soundex.encode("I"), Eq("I000"));
}

TEST_F(SoundexEncoding, ReplacesConsonantsWithAppropriateDigits) {
  ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}