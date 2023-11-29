#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int levels[n];

  for (int i = 0; i < n; i++) {
    cin >> levels[i];
  }

  int lows[(n / 2) + (n % 2)];
  int highs[n / 2];

  sort(levels, levels + n, greater<int>());

  for (int i = 0; i < n / 2; i++) {
    highs[i] = levels[i];
  }

  for (int i = 0; i < (n / 2) + (n % 2); i++) {
    lows[i] = levels[(n / 2) + i];
  }

  sort(highs, highs + (n/2));

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      cout << lows[i / 2] << " ";
    }
    else {
      cout << highs[(i - 1) / 2] << " ";
    }
  }

  return 0;
}