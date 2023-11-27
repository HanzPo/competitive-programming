#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int b, n = 0;
  char songs[5]{'A', 'B', 'C', 'D', 'E'};

  while (b != 4) {
    cin >> b >> n;

    if (b == 1) {
      for (int i = 0; i < n; i++) {
        char temp = songs[0];

        for (int j = 0; j < 4; j++) {
          songs[j] = songs[j + 1];
        }

        songs[4] = temp;
      }
    }
    else if (b == 2) {
      for (int i = 0; i < n; i++) {
        char temp = songs[4];

        for (int j = 4; j > 0; j--) {
          songs[j] = songs[j - 1];
        }

        songs[0] = temp;
      }
    }
    else if (b == 3) {
      for (int i = 0; i < n; i++) {
        char temp = songs[0];

        songs[0] = songs[1];
        songs[1] = temp;
      }
    }
  }

  for (int i = 0; i < 5; i++) {
    cout << songs[i];

    if (i != 4) {
      cout << " ";
    }
  }

  return 0;
}