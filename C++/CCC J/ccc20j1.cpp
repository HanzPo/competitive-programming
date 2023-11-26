#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int s, m, l;

  cin >> s >> m >> l;

  if ((1 * s) + (2 * m) + (3 * l) >= 10) {
    cout << "happy";
  }
  else {
    cout << "sad";
  }

  return 0;
}