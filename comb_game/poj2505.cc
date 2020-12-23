#include <cstdio>

int main() {
  long long n;
  while (scanf("%lld", &n) != EOF) {
    bool win;
    while (true) {
      long long l = (n + 8) / 9;
      if (l == 1) {
        win = true;
        break;
      }
      n = l;
      l = (n + 1) / 2;
      if (l == 1) {
        win = false;
        break;
      }
      n = l;
    }
    if (win) printf("Stan wins.\n");
    else printf("Ollie wins.\n");
  }
  return 0;
}
