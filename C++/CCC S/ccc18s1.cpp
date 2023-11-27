#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; 

  cin >> n;

  int villages[n];

  for (int i = 0; i < n; i++) {
    cin >> villages[i];
  }

  
  sort(villages, villages + n);
  double lowest = INT_MAX;
  double points[n - 1];
  for (int i = 0; i < n - 1; i++) {
    points[i] = ((double) villages[i + 1] + villages[i]) / 2.0;
  }

  for (int i = 0; i < n - 2; i++) {
    double size = points[i + 1] - points[i];

    if (size < lowest) {
      lowest = size;
    }
  }

  cout << fixed << setprecision(1) << lowest;

  return 0;
}