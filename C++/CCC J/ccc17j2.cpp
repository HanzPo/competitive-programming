#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;

  cin >> n >> k;

  int sum = 0;

  for (int i = 0; i <= k; i++) {
    sum += n * pow(10, i);
  }

  cout << sum;

  return 0;
}