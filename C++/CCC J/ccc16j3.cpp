#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;

  cin >> word;

  int size = 0;

  for (int i = 0; i < (int) word.size(); i++) {
    for (int j = 1; j <= (int) word.size() - i; j++) {
      string str = word.substr(i, j);
      reverse(str.begin(), str.end());

      if (j > size) {
        if (word.substr(i, j) == str) {
          size = j;
        }
      }
    }
  }

  cout << size;

  return 0;
}