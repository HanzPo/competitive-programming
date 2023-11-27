#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int l;

  cin >> l;

  int n[l];
  char input[l];

  for (int i = 0; i < l; i++) {
    cin >> n[i] >> input[i];
  }

  for (int i = 0; i < l; i++) {
    for (int j = 0; j < n[i]; j++) {
      cout << input[i];
    }

    cout << "\n";
  }

  return 0;
}