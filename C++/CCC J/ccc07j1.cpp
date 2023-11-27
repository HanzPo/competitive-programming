#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  map<int, int> values{{1, 100},    {2, 500},     {3, 1000},  {4, 5000},
                       {5, 10000},  {6, 25000},   {7, 50000}, {8, 100000},
                       {9, 500000}, {10, 1000000}};
  vector<int> cases{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;

    for (int j = 0; j < (int) cases.size(); j++) {
      if (cases[j] == temp) {
        cases.erase(cases.begin() + j);
      }
    }
  }

  int sum = 0;

  for (int i = 0; i < (int) cases.size(); i++) {
    sum += values[cases[i]];
  }

  double avg = (double) sum / cases.size();

  int offer;

  cin >> offer;

  if ((double) offer > avg) {
    cout << "deal";
  }
  else {
    cout << "no deal";
  }

  return 0;
}