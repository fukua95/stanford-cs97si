#include <cstdio>

int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    int xor_sum = 0;
    int a;
    for (int i = 0; i < n; ++i) {
      scanf("%d", &a);
      xor_sum ^= a;
    }
    if (xor_sum) printf("Yes\n");
    else printf("No\n");
  }
  return 0;
}
