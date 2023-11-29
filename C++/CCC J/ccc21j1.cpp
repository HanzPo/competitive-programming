#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int b;

  cin >> b;

  int p = b * 5 - 400;

  cout << p << "\n";

  if (p > 100) {
    cout << -1;
  } else if (p == 100) {
    cout << 0;
  } else {
    cout << 1;
  }

  return 0;
}