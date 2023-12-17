#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c, d, s;

  cin >> a >> b >> c >> d >> s;

  int nikky = 0;
  int byron = 0;
  bool nikky_fwd = true;
  bool byron_fwd = true;
  int nikky_steps = 0;
  int byron_steps = 0;

  for (int i = 0; i < s; i++) {
    if (nikky_fwd) {
      nikky++;
      nikky_steps++;

      if (nikky_steps == a) {
        nikky_steps = 0;
        nikky_fwd = false;
      }
    }
    else {
      nikky--;
      nikky_steps++;

      if (nikky_steps == b) {
        nikky_steps = 0;
        nikky_fwd = true;
      }
    }
    if (byron_fwd) {
      byron++;
      byron_steps++;

      if (byron_steps == c) {
        byron_steps = 0;
        byron_fwd = false;
      }
    }
    else {
      byron--;
      byron_steps++;

      if (byron_steps == d) {
        byron_steps = 0;
        byron_fwd = true;
      }
    }
  }

  if (nikky > byron) {
    cout << "Nikky";
  }
  else if (nikky < byron) {
    cout << "Byron";
  }
  else {
    cout << "Tied";
  }

  return 0;
}