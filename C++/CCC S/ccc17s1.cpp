#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  int points[2][n];

  for (int team = 0; team < 2; team++) {
    for (int i = 0; i < n; i++) {
      cin >> points[team][i];
    }
  }

  int k = 0;
  int swiftsum = 0;
  int semasum = 0;

  for (int i = 0; i < n; i++) {
    swiftsum += points[0][i];
    semasum += points[1][i];

    if (swiftsum == semasum) {
      k = i + 1;
    }
  }

  cout << k;

  return 0;
}