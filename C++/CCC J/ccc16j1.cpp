#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  char arr[6];
  int w = 0;

  for (int i = 0; i < 6; i++) {
    cin >> arr[i];
    if (arr[i] == 'W') {
      w++;
    }
  }

  if (w == 5 || w == 6) {
    cout << 1;
  } else if (w == 3 || w == 4) {
    cout << 2;
  } else if (w == 1 || w == 2) {
    cout << 3;
  } else {
    cout << -1;
  }

  return 0;
}