#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  int times[N];
  int position[N];
  map<int, int> info;

  for (int i = 0; i < N; i++) {
    cin >> times[i] >> position[i];
    info[times[i]] = position[i];
  }

  sort(times, times + N);

  double max_speed = 0;
  for (int i = 1; i < N; i++) {
    double current_speed = abs((double) info[times[i]] - (double) info[times[i - 1]]) / abs((double) times[i] - (double) times[i - 1]);

    if (current_speed > max_speed) {
      max_speed = current_speed;
    }
  }

  cout << fixed << setprecision(2) << max_speed;

  return 0;
}