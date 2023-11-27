#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, n;

  cin >> m >> n;

  int ways;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {

      if (i + j == 10) {
        ways++;
      }
    }
  }

  if (ways == 1) {
    cout << "There is 1 way to get the sum 10.";
  }
  else {
    cout << "There are " << ways << " ways to get the sum 10.";
  }

  return 0;
}