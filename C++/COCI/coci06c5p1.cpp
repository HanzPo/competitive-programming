#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string input;
  cin >> input;

  int cups[3]{1, 0, 0};

  for (int i = 0; i < (int)input.size(); i++) {
    if (input[i] == 'A') {
      int temp = cups[0];
      cups[0] = cups[1];
      cups[1] = temp;
    }
    else if (input[i] == 'B') {
      int temp = cups[1];
      cups[1] = cups[2];
      cups[2] = temp;
    }
    else if (input[i] == 'C') {
      int temp = cups[0];
      cups[0] = cups[2];
      cups[2] = temp;
    }
  }

  for (int i = 0; i < 3; i++) {
    if (cups[i] == 1) { 
      cout << i + 1;
      break;
    }
  }

  return 0;
}