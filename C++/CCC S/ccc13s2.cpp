#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int W, N;
  cin >> W >> N;
  int weights[N];

  for (int i = 0; i < N; i++) {
    cin >> weights[i];
  }

  int weight_on_bridge = 0;

  if (N <= 4) {
    for (int i = 0; i < N; i++) {
      weight_on_bridge += weights[i];

      if (weight_on_bridge > W) {
        cout << i;
        return 0;
      }
    }

    cout << N;
    return 0;
  }

  for (int i = 0; i < 4; i++) {
    weight_on_bridge += weights[i];

    if (weight_on_bridge > W) {
      cout << i;
      return 0;
    }
  }

  for (int i = 0; i < N - 4; i++) {
    weight_on_bridge += weights[i + 4];
    weight_on_bridge -= weights[i];

    if (weight_on_bridge > W) {
      cout << i + 4;
      return 0;
    }
  }

  cout << N;
  return 0;
}
