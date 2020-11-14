//
// Created by angelos on 14/11/2020.
//

#include <gmock/gmock.h>



class Soundex {
public:
  std::string encode(const std::string& word) const {
    return "A";
  }
};

TEST(SoundexEncoding, RetainsSoLetterOfOneLetterWord) {
  Soundex soundex;
  auto encoded = soundex.encode("A");
  ASSERT_THAT(encoded, testing::Eq("A"));
}