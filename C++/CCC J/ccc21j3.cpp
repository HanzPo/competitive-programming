#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string input;
  vector<string> inputs;

  while (input != "99999") {
    cin >> input;
    inputs.push_back(input);
  }

  for (int i = 0; i < (int) inputs.size() - 1; i++) {
    // 0 = left, 1 = right
    int current_dir;
    int last_dir;

    int a = inputs[i][0] - '0';
    int b = inputs[i][1] - '0';

    if (a + b == 0) {
      current_dir = last_dir;
    }
    else if ((a + b) % 2 == 0) {
      current_dir = 1;
      last_dir = current_dir;
    }
    else {
      current_dir = 0;
      last_dir = current_dir;
    }

    if (current_dir == 0) {
      cout << "left " << stoi(inputs[i].substr(2, 3)) << "\n"; 
    }
    else {
      cout << "right " << stoi(inputs[i].substr(2, 3)) << "\n"; 
    }
  }

  return 0;
}