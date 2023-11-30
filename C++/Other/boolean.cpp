#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string input;
  bool state = false;

  while (true) {
    cin >> input;

    if (input == "not") {
      state = !state;
    }
    else if (input == "True") {
      state = !state;
      break;
    }
    else {
      break;
    }
  }

  if (state) {
    cout << "True";
  }
  else {
    cout << "False";
  }

  return 0;
}