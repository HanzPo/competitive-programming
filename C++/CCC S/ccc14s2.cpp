#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  unordered_map<string, string> names_map;
  string names[n];
  string names_2[n];

  for (int i = 0; i < n; i++) {
    cin >> names[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> names_2[i];
  }

  for (int i = 0; i < n; i++) {
    names_map.insert({names[i], names_2[i]});
  }

  for (int i = 0; i < n; i++) {
    if (names[i] != names_map[names_map[names[i]]] ||
        names[i] == names_map[names[i]]) {
      cout << "bad";
      return 0;
    }
  }

  cout << "good";

  return 0;
}