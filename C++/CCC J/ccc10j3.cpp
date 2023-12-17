#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int input = 0;
  int a = 0;
  int b = 0;

  while (input != 7) {
    cin >> input;

    if (input == 1) {
      char var;
      int num;

      cin >> var >> num;

      if (var == 'A') {
        a = num;
      } else if (var == 'B') {
        b = num;
      }
    } else if (input == 2) {
      char var;
      cin >> var;

      if (var == 'A') {
        cout << a << endl;
      } else if (var == 'B') {
        cout << b << endl;
      }
    } else if (input == 3) {
      char x, y;
      int temp;

      cin >> x >> y;

      if (y == 'A') {
        temp = a;
      } else if (y == 'B') {
        temp = b;
      }

      if (x == 'A') {
        a += temp;
      } else if (x == 'B') {
        b += temp;
      }
    } else if (input == 4) {
      char x, y;
      int temp;

      cin >> x >> y;

      if (y == 'A') {
        temp = a;
      } else if (y == 'B') {
        temp = b;
      }

      if (x == 'A') {
        a *= temp;
      } else if (x == 'B') {
        b *= temp;
      }
    } else if (input == 5) {
      char x, y;
      int temp;

      cin >> x >> y;

      if (y == 'A') {
        temp = a;
      } else if (y == 'B') {
        temp = b;
      }

      if (x == 'A') {
        a -= temp;
      } else if (x == 'B') {
        b -= temp;
      }
    } else if (input == 6) {
      char x, y;
      int temp;

      cin >> x >> y;

      if (y == 'A') {
        temp = a;
      } else if (y == 'B') {
        temp = b;
      }

      if (x == 'A') {
        a /= temp;
      } else if (x == 'B') {
        b /= temp;
      }
    }
  }

  return 0;
}