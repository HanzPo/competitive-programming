#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dists[4];

  for (int i = 0; i < 4; i++) {
    cin >> dists[i];
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j) {
        cout << 0 << " ";
      }
      else {
        int dist = 0;
        if (j > i) {
          for (int k = 0; k < j - i; k++) {
            dist += dists[i + k];
          }
        }
        else {
          for (int k = i - j; k > 0; k--) {
            dist += dists[i - k];
          }
        }
        cout << dist << " ";
      }
    }

    cout << "\n";
  }

  return 0;
}