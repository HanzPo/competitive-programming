#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;
  int sum = 0;
  cin >> a >> b;

  sum += 50 * a;
  sum -= 10 * b;

  if (a > b) {
    sum += 500;
  }

  cout << sum;

  return 0;
}