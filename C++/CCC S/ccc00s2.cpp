#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  vector<int> streams;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    streams.push_back(temp);
  }

  bool stream = true;
  while (stream) {
    int input;

    cin >> input;

    if (input == 99) {
      int split, flow;
      cin >> split >> flow;

      streams.insert(streams.begin() + split,
                     streams[split - 1] - round((double)streams[split - 1] *
                                                ((double)flow / 100)));
      streams[split - 1] =
          round((double)streams[split - 1] * ((double)flow / 100));
    } else if (input == 88) {
      int join;
      cin >> join;

      streams[join] = streams[join] + streams[join - 1];
      streams.erase(streams.begin() + join - 1);
    } else if (input == 77) {
      stream = false;
    }
  }

  for (int i = 0; i < (int)streams.size(); i++) {
    cout << streams[i] << " ";
  }

  return 0;
}