#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  cout << "A long time ago in a galaxy ";

  for (int i = 0; i < n; i++) {
    if (i != 0) {
      cout << ", ";
    }

    cout << "far";
  }

  cout << " away...";

  return 0;
}