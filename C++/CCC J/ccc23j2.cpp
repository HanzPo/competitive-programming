#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t;
  cin >> n;
  t = 0;

  map<string, int> shu {{"Poblano", 1500}, {"Mirasol", 6000}, {"Serrano", 15500}, {"Cayenne", 40000}, {"Thai", 75000}, {"Habanero", 125000}};

  for (int i = 0; i < n; i++) {
    string pepper;
    cin >> pepper;
    t += shu[pepper];
  }

  cout << t;

  return 0;
}