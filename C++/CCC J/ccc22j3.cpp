#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string input;

  cin >> input;

  for (int i = 0; i < (int) input.size(); i++) {
    if (input[i] == '+') {
      cout << " tighten ";
    }
    else if (input[i] == '-') {
      cout << " loosen ";
    }
    else if (isdigit(input[i])){
      if (i == (int) input.size() - 1) {
        cout << input[i];
      }
      else if (!isdigit(input[i + 1])) {
        cout << input[i] << "\n";
      }
      else {
        cout << input[i];
      }
      
    }
    else {
      cout << input[i];
    }
  }

  return 0;
}