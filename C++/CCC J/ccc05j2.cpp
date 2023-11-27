#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;

  cin >> a >> b;

  int rsa_nums = 0;
  for (int i = a; i <= b; i++) {
    int divisors = 2;

    for (int j = 2; j <= ceil(i / 2.0); j++) {
      if (i % j == 0) {
        divisors++;
      }
    }

    if (divisors == 4) {
      rsa_nums++;
    }
  }

  cout << "The number of RSA numbers between " << a << " and " << b << " is " << rsa_nums;

  return 0;
}