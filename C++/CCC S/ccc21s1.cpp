#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  int h[n+1];
  int w[n];

  for (int i = 0; i < n + 1; i++) {
    cin >> h[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }

  double sum = 0;

  for (int i = 0; i < n; i++) {
    sum += (((double) h[i] + h[i + 1]) / 2) * (double) w[i];
  }

  cout << fixed <<  sum;
  return 0;
}

