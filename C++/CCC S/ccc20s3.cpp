#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string N, H;
  cin >> N >> H;

  set<string> permutations;

  int needle_hash = 0;
  for (int i = 0; i < N.size(); i++) {
    needle_hash += (N[i] - 'A' + 1);
  }

  int hash = 0;
  for (int i = 0; i < N.size(); i++) {
    hash += (H[i] - 'A' + 1);
  }

  for (int i = 0; i < H.size() - N.size() + 1; i++) {
    if (needle_hash == hash) {
      string current_substr = H.substr(i, N.size());
      permutations.insert(current_substr);
    }

    hash -= (H[i] - 'A' + 1);
    hash += (H[i + N.size()] - 'A' + 1);
  }

  cout << permutations.size();

  return 0;
}
