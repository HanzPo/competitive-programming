#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int h, M;

  cin >> h >> M;

  for (int i = 1; i <= M; i++) {
    int A = (-6 * pow(i, 4)) + (h * pow(i, 3)) + (2 * pow(i, 2)) + i;

    if (A <= 0) {
      cout << "The balloon first touches ground at hour:\n" << i;
      return 0;
    }
  }

  cout << "The balloon does not touch ground in the given time.";

  return 0;
}