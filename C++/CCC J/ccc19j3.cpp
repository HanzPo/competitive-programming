#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  string lines[n];

  for (int i = 0; i < n; i++) {
    cin >> lines[i];
  }

  int currentCount = 1;
  for (int i = 0; i < n; i++) {
    currentCount = 1;
    for (int j = 1; j < (int) lines[i].length(); j++) {
      if (lines[i][j] == lines[i][j - 1]) {
        currentCount++;
      }
      else {
        cout << currentCount << " " << lines[i][j - 1] << " ";
        currentCount = 1;
      }
    }

    cout << currentCount << " " << lines[i][lines[i].length() - 1] << "\n";
  }

  return 0;
}