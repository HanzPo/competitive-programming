#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, m;

  cin >> k >> m;

  int r[m];
  vector<int> friends;

  for (int i = 0; i < m; i++) {
    cin >> r[i];
  }

  for (int i = 0; i < k; i++) {
    friends.push_back(i + 1);
  }

  for (int i = 0; i < m; i++) {
    for (int j = 1; j <= (int) friends.size(); j++) {
      if (j % r[i] == 0) {
        friends[j-1] = 0;
      }
    }

    for (int i = 0; i < (int) friends.size(); i++) {
      if (friends[i] == 0) {
        friends.erase(friends.begin() + i);
      }
    }
  }

  for (int i : friends) {
    cout << i << "\n";
  }

  return 0;
}