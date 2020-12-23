#include <iostream>

int main() {
  int n;
  while (true) {
    std::cin >> n;
    if (n == 0) break;
    if (n <= 2) std::cout << "Alice\n";
    else std::cout << "Bob\n";
  }
  return 0;
}
