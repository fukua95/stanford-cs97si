#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

int main() {
  std::string s;
  std::vector<int> count(26);
  for (int i = 0; i < 4; ++i) {
    getline(std::cin, s);
    for (int j = 0; j < s.length(); ++j) {
      char ch = s[j];
      if (ch >= 'A' && ch <= 'Z') {
        count[ch - 'A']++;
      }
    }
  }
  
  int max = 0;
  for (int i = 0; i < 26; ++i) {
    if (count[i] > max) max = count[i];
  }

  for (int i = 0; i < max; ++i) {
    for (int j = 0; j < 26; ++j) {
      if (i >= max - count[j]) std::cout << '*';
      else std::cout << ' ';
      if (j != 25) std::cout << ' ';
      else std::cout << std::endl;
    }
  }
  for (int i = 0; i < 26; ++i) {
    std::cout << (char)('A' + i);
    if (i != 25) std::cout << ' ';
    else std::cout << std::endl;
  }
  return 0;
}