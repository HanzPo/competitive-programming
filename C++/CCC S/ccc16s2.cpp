#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int type, n;

  cin >> type >> n;

  int dmoj[n];
  int peg[n];

  for (int i = 0; i < n; i++) {
    cin >> dmoj[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> peg[i];
  }

  int sum = 0;
  if (type == 1) {
    sort(dmoj, dmoj + n);
    sort(peg, peg + n);
    for (int i = 0; i < n; i++) {
      sum += max(dmoj[i], peg[i]);
    }

    cout << sum;
  }
  else if (type == 2) {
    sort(dmoj, dmoj + n, greater<int>());
    sort(peg, peg + n);
    for (int i = 0; i < n; i++) {
      sum += max(dmoj[i], peg[i]);
    }

    cout << sum;
  }

  return 0;
}