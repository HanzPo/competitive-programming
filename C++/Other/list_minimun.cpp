#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  vector<int> nums;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    nums.push_back(temp);
  }

  while (nums.size() > 0) {
    int min_num = INT_MAX;
    for (int i = 0; i < (int) nums.size(); i++) {
      if (nums[i] < min_num) {
        min_num = nums[i];
      }
    }

    cout << min_num;

    if ((int) nums.size() != 1) {
      cout << "\n";
    }

    for (int i = 0; i < (int) nums.size(); i++) {
      if (nums[i] == min_num) {
        nums.erase(nums.begin() + i);
      }
    }
  }

  return 0;
}