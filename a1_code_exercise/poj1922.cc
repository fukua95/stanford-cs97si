#include <iostream>
#include <vector>
#include <algorithm>

bool surpass(int t1, int v1, int t2, int v2) {
  return (t2 - t1) * v1 * v2 <= 4.5 * 3600 * (v2 - v1);
}

int main() {
  int n;
  while (std::cin >> n) {
    if (n == 0) break;
    std::vector<std::pair<int, int>> cars;  // (time, speed)
    for (int i = 0, v, t; i < n; ++i) {
      std::cin >> v >> t;
      if (t < 0) continue;
      cars.emplace_back(t, v);
    }
    
    std::sort(cars.begin(), cars.end());
    int cur_t = cars[0].first;
    int cur_v = cars[0].second;
    for (int i = 1; i < cars.size(); ++i) {
      int t = cars[i].first, v = cars[i].second;
      if (surpass(cur_t, cur_v, t, v)) {
        cur_t = t;
        cur_v = v;
      }
    }
    std::cout << cur_t + (int)((4.5 * 3600 + cur_v - 1) / cur_v) << std::endl;
  }
  return 0;
}