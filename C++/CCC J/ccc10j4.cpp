#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  if (n == 0) {
    return 0;
  }
  
  if (n == 1) {
    cout << 0;
    return 0;
  }

  int temps[n];
  int differences[n - 1];

  for (int i = 0; i < n; i++) {
    cin >> temps[i];
  }

  for (int i = 0; i < n - 1; i++) {
    differences[i] = temps[i + 1] - temps[i];
  }

  for (int i = 1; i < n - 1; i++) {
    if (differences[0] == differences[i]) {
      cout << i;
      return 0;
    }
  }

  cout << n - 1;

  return 0;
}