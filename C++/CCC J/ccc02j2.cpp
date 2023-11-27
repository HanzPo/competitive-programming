#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<string> words;
  string line;

  cin >> line;
  while (line != "quit!") {
    words.push_back(line);
    cin >> line;
  }

  for (int i = 0; i < (int)words.size(); i++) {
    if (words[i].size() > 4) {
      if (words[i][words[i].size() - 3] != 'a' &&
          words[i][words[i].size() - 3] != 'e' &&
          words[i][words[i].size() - 3] != 'i' &&
          words[i][words[i].size() - 3] != 'o' &&
          words[i][words[i].size() - 3] != 'u' &&
          words[i][words[i].size() - 3] != 'y') {
        if (words[i].substr(words[i].size() - 2, 2) == "or") {
          words[i] = words[i].substr(0, words[i].size() - 2) + "our";
        }
      }
    }

    cout << words[i];
    if (i != (int)words.size() - 1) {
      cout << "\n";
    }
  }

  return 0;
}