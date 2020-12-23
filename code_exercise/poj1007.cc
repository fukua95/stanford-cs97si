#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int calc_inv_order_num(const std::string& s) {
  int ans = 0;
  int len = s.length();
  for (int i = 0; i < len; ++i) {
    for (int j = i + 1; j < len; ++j) {
      if (s[i] - 'A' > s[j] - 'A') {
        ++ans;
      }
    }
  }
  return ans;
}

int main() {
  int len, num;
  std::cin >> len >> num;
  std::vector<std::string> s(num);
  for (int i = 0; i < num; ++i) {
    std::cin >> s[i];
  }
  
  std::vector<std::pair<int, int>> inv_order_num(num);
  for (int i = 0; i < num; ++i) {
    inv_order_num[i].first = calc_inv_order_num(s[i]);
    inv_order_num[i].second = i;
  }
  std::sort(inv_order_num.begin(), inv_order_num.end());

  for (int i = 0; i < num; ++i) {
    // std::cout << inv_order_num[i].first << " " << inv_order_num[i].second << std::endl;
    std::cout << s[inv_order_num[i].second] << std::endl;
  }
  return 0;
}