#include <iostream>

int rev(int x) {
  int r = 0;
  while (x > 0) {
    r = r * 10 + x % 10;
    x /= 10;
  }
  return r;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int x, y;
    std::cin >> x >> y;
    std::cout << rev(rev(x) + rev(y)) << std::endl;
  }
  return 0;
}