//
// Created by angelos on 14/11/2020.
//

#ifndef SOUNDEX__SOUNDEX_H_
#define SOUNDEX__SOUNDEX_H_
#include <string>
#include <unordered_map>

static const size_t MaxCodeLength{4};

class Soundex {
public:
  static const size_t MaxCodeLength{4};

  std::string encode(const std::string& word) const;
  std::string encodedDigit(char letter) const;
private:
  std::string head(const std::string &word) const;
  std::string tail(const std::string &word) const;
  std::string zeroPad(const std::string& word) const;
  std::string encodeDigits(const std::string &word) const;
  std::string lastDigit(const std::string &encoding) const;

  bool isComplete(const std::string &encoding) const;
};

#endif // SOUNDEX__SOUNDEX_H_
