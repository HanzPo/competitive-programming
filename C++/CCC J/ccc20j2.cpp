#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int p, n, r;

  cin >> p >> n >> r;

  int sum = n;
  int i = 0;
  while (!(sum > p)) {
    i++;
    sum += n * pow(r, i);
  }

  cout << i;

  return 0;
}