#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int y;

  cin >> y;

  bool found = false;

  while(!found) {
    y++;
    string y_str = to_string(y);
    unordered_set<char> digits;
    found = true;
    for (int i = 0; i < y_str.length(); i++) {
      if (digits.find(y_str[i]) != digits.end()) {
        found = false;
        break;
      }

      digits.insert(y_str.at(i));
    }
  }

  cout << y;

  return 0;
}