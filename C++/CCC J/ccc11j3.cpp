
#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t1, t2;
  cin >> t1 >> t2;

  int last_t, lastlast_t, current_t, count;

  lastlast_t = t1;
  last_t = t2;
  count = 3;

  current_t = lastlast_t - last_t;
  
  while (current_t <= last_t) {
    lastlast_t = last_t;
    last_t = current_t;
    current_t = lastlast_t - last_t;
    count++;
  }

  cout << count;

  return 0;
}