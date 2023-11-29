#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, c;

  cin >> t >> c;

  int chores[c];

  for (int i = 0; i < c; i++) {
    cin >> chores[i];
  }

  sort(chores, chores + c);

  int total = 0;
  for (int i = 0; i < c; i++) {
    total += chores[i];

    if (total > t) {
      cout << i;
      return 0;
    }
  }

  return 0;
}