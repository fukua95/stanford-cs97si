#include <iostream>

int main() {
  int n;
  std::cin >> n;
  n *= 2;
  int count = 1;
  for (int i = 2; i <= n; ++i) {
    if (n % i != 0) continue;
    int j = n / i;
    if (j <= i) break;
    if ((i + j - 1) % 2 != 0) continue;
    ++count;
  }
  std::cout << count << std::endl;
  return 0;
}