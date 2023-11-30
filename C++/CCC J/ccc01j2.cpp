#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, m, n;

  n = -1;

  cin >> x >> m;

  for (int i = 0; i < m; i++) {
    if ((x * i) % m == 1) {
      n = i;
    }
  }

  if (n == -1) {
    cout << "No such integer exists.";
  } else {
    cout << n;
  }

  return 0;
}