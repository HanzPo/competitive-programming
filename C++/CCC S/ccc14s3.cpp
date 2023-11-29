#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> mountain;
  vector<int> branch;
  vector<int> lake;

  int t, n;

  cin >> t;

  char ans[t];

  for (int i = 0; i < t; i++) {
    cin >> n;

    for (int j = 0; j < n; j++) {
      int temp;

      cin >> temp;
      mountain.push_back(temp);
    }

    bool valid = true;

    int next_val = 1;

    while((int) lake.size() < n) {
      if (branch.size() > 0) {
        if (mountain.back() == next_val) {
          lake.push_back(mountain.back());
          mountain.pop_back();
          next_val++;
        } else if (branch.back() == next_val) {
          lake.push_back(branch.back());
          branch.pop_back();
          next_val++;
        } else {
          if (mountain.size() > 0) {
            branch.push_back(mountain.back());
            mountain.pop_back();
          } else {
            valid = false;
            break;
          }
        }
      } else {
        if (mountain.back() == next_val) {
          lake.push_back(mountain.back());
          mountain.pop_back();
          next_val++;
        } else {
          if (mountain.size() > 0) {
            branch.push_back(mountain.back());
            mountain.pop_back();
          } else {
            valid = false;
            break;
          }
        }
      }
    }

    if (valid) {
      ans[i] = 'Y';
    } else {
      ans[i] = 'N';
    }

    branch.clear();
    lake.clear();
    mountain.clear();
  }

  for (int i = 0; i < t; i++) {
    cout << ans[i] << "\n";
  }

  return 0;
}