#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  if (n < 6) {
    cout << floor(n / 2.0) + 1;
  }
  else {
    cout << floor((10 - n) / 2.0) + 1;
  }
  

  return 0;
}