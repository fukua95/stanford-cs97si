#include <iostream>

int main() {
  double c;
  while (std::cin >> c) {
    if (c == 0.00) break;
    int ans = 0;
    double sum = 0.0;
    while (sum < c) {
      ++ans;
      sum += 1.0 / (ans + 1.0);
    }
    std::cout << ans << " card(s)" << std::endl;
  }
  return 0;
}