#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int X, Y, G;

  cin >> X;

  string same_group[X][2];

  for (int i = 0; i < X; i++) {
    cin >> same_group[i][0];
    cin >> same_group[i][1];
  }

  cin >> Y;

  string different_group[Y][2];

  for (int i = 0; i < Y; i++) {
    cin >> different_group[i][0];
    cin >> different_group[i][1];
  }

  cin >> G;

  string groups[G][3];

  for (int i = 0; i < G; i++) {
    cin >> groups[i][0];
    cin >> groups[i][1];
    cin >> groups[i][2];
  }

  return 0;
}

