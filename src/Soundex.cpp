//
// Created by angelos on 14/11/2020.
//

#include "Soundex.h"

std::string Soundex::encode(const std::string &word) const {
  return zeroPad(head(word) + encodeDigits(word));
}

std::string Soundex::head(const std::string &word) const {
    return word.substr(0, 1);
}

std::string Soundex::zeroPad(const std::string &word) const {
  auto zeros_needed = 4 - word.length();
  return word + std::string(zeros_needed, '0');
}

std::string Soundex::encodeDigits(const std::string &word) const {
  if (word.length() > 1)
    return "1";
  return "";
}