#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;

  cin >> a >> b;

  int count = 0;
  for (int i = a; i <= b; i++) {
    if (round(sqrt(i)) * round(sqrt(i)) == i && round(cbrt(i)) * round(cbrt(i)) * round(cbrt(i)) == i) {
      count++;
    }
  }

  cout << count;

  return 0;
}