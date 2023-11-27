#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int sqr[4][4];

  for (int i = 0; i < 4; i++) {
    cin >> sqr[i][0] >> sqr[i][1] >> sqr[i][2] >> sqr[i][3];
  }

  int sum = sqr[0][0] + sqr[0][1] + sqr[0][2] + sqr[0][3];

  for (int i = 1; i < 4; i++) {
    if (sqr[i][0] + sqr[i][1] + sqr[i][2] + sqr[i][3] != sum) {
      cout << "not magic\n";
      return 0;
    }
  }

  for (int i = 0; i < 4; i++) {
    if (sqr[0][i] + sqr[1][i] + sqr[2][i] + sqr[3][i] != sum) {
      cout << "not magic\n";
      return 0;
    }
  }

  cout << "magic\n";

  return 0;
}