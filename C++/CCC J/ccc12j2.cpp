#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int arr[4];
  bool rising = true;
  bool diving = true;
  bool constant = true;

  for (int i = 0; i < 4; i++) {
    cin >> arr[i];

    if (i > 0) {
      if (arr[i - 1] != arr[i]) {
        constant = false;
      }
      if (arr[i - 1] >= arr[i]) {
        rising = false;
      }
      if (arr[i - 1] <= arr[i]) {
        diving = false;
      }
    }
  }

  if (rising) {
    cout << "Fish Rising";
  } else if (diving) {
    cout << "Fish Diving";
  } else if (constant) {
    cout << "Fish At Constant Depth";
  } else {
    cout << "No Fish";
  }

  return 0;
}