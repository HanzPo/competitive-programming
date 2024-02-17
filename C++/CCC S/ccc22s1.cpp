#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, count;

  count = 0;
  cin >> N;

  for (int i = 0; i < (N / 4) + 1; i++) {
    if ((N - (4 * i)) % 5 == 0) {
      count++;
    }
  }

  cout << count;

  return 0;
}