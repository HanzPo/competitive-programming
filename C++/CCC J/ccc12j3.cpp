#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int k;

  cin >> k;

  for (int i = 0; i < k; i++) {

    for (int j = 0; j < k; j++) {
      cout << "*";
    }

    for (int j = 0; j < k; j++) {
      cout << "x";
    }

    for (int j = 0; j < k; j++) {
      cout << "*";
    }

    cout << "\n";
  }

  for (int i = 0; i < k; i++) {

    for (int j = 0; j < k; j++) {
      cout << " ";
    }

    for (int j = 0; j < k * 2; j++) {
      cout << "x";
    }

    cout << "\n";
  }

  for (int i = 0; i < k; i++) {

    for (int j = 0; j < k; j++) {
      cout << "*";
    }

    for (int j = 0; j < k; j++) {
      cout << " ";
    }

    for (int j = 0; j < k; j++) {
      cout << "*";
    }

    cout << "\n";
  }

  return 0;
}