#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  int bids[n];
  string names[n];

  for (int i = 0; i < n; i++) {
    cin >> names[i];
    cin >> bids[i];
  }

  int highest = 0;
  int index = 0;

  for (int i = 0; i < n; i++) {
    if (bids[i] > highest) {
      highest = bids[i];
      index = i;
    }
  }

  cout << names[index];

  return 0;
}