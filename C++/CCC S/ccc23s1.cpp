#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int C;
  cin >> C;

  int colours[2][C];

  for (int i = 0; i < C; i++) {
    cin >> colours[0][i];
  }

  for (int i = 0; i < C; i++) {
    cin >> colours[1][i];
  }

  int total = 0;

  for (int i = 0; i < C; i++) {
    total += colours[0][i] * 3;
    total += colours[1][i] * 3;
  }

  for (int i = 0; i < C; i+=2) {
    if (colours[0][i] == 1 && colours[1][i] == 1) {
      total -= 2;
    }
  }

  for (int i = 0; i < C - 1; i++) {
    if (colours[0][i] == 1 && colours[0][i + 1] == 1) {
      total -= 2;
    }
    if (colours[1][i] == 1 && colours[1][i + 1] == 1) {
      total -= 2;
    }
  }

  cout << total;

  return 0;
}