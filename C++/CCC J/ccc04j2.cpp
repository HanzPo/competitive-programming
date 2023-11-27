#include <bits/stdc++.h>

using namespace std;

#define int unsigned long long

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y;

  cin >> x >> y;

  for (int i = 0; i <= y - x; i++) {
    if (i % 4 == 0 && i % 3 == 0 && i % 5 == 0) {
      cout << "All positions change in year " << x + i << "\n";
    }
  }

  return 0;
}