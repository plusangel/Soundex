//
// Created by angelos on 14/11/2020.
//

#ifndef SOUNDEX__SOUNDEX_H_
#define SOUNDEX__SOUNDEX_H_
#include <string>

class Soundex {
public:
  std::string encode(const std::string& word) const;

private:
  std::string zeroPad(const std::string& word) const;
};

#endif // SOUNDEX__SOUNDEX_H_
