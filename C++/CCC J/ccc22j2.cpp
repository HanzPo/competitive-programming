#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int points[n];
  int fouls[n];

  int stars = 0;

  for (int i = 0; i < n; i++) {
    cin >> points[i] >> fouls[i];

    if ((points[i] * 5) - (fouls[i] * 3) > 40) {
      stars++;
    }
  }

  cout << stars;

  if (stars == n) {
    cout << "+";
  }

  return 0;
}