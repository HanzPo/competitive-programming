#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  int year[n];
  int month[n];
  int day[n];

  for (int i = 0; i < n; i++) {
    cin >> year[i] >> month[i] >> day[i];
  }

  for (int i = 0; i < n; i++) {
    if (2007 - year[i] > 18) {
      cout << "Yes\n";
      continue;
    }
    else if ((2007 - year[i] < 18)) {
      cout << "No\n";
      continue;
    }
    else {
      if (month[i] < 2) {
        cout << "Yes\n";
      }
      else if (month[i] > 2) {
        cout << "No\n";
      }
      else {
        if (day[i] > 27) {
          cout << "No\n";
        }
        else {
          cout << "Yes\n";
        }
      }
    }
  }
  return 0;
}

