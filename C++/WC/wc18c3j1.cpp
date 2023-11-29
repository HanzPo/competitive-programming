#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int p, b, d;

  cin >> p >> b >> d;

  cout << ((p / b) * d) + (p % b);

  return 0;
}