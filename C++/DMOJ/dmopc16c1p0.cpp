#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int w, c;

  cin >> w >> c;

  if (w == 3 && c >= 95) {
    cout << "C.C. is absolutely satisfied with her pizza.";
  }
  else if (w == 1 && c <= 50) {
    cout << "C.C. is fairly satisfied with her pizza.";
  }
  else {
    cout << "C.C. is very satisfied with her pizza.";
  }

  return 0;
}