#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int k;
  string input;
  
  cin >> k >> input;

  char output[input.size()];

  for (int i = 0; i < (int) input.size(); i++) {
    int shift = (3 * (i + 1)) + k;
    int letter = (int) input[i] - 65;

    output[i] = ((26 + letter - shift) % 26) + 65;
  }

  for (int i = 0; i < (int) input.size(); i++) {
    cout << output[i];
  }

  return 0;
}