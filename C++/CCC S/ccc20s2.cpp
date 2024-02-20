#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int M, N;

  cin >> M >> N;

  int grid[M][N];
  bool visited[M][N];

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> grid[i][j];
      visited[i][j] = false;
    }
  }

  stack<array<int, 2>> visit;

  visit.push({0, 0});
  while (visit.size() > 0) {
    array<int, 2> current_vertex = visit.top();
    visit.pop();

    if (visited[current_vertex[0]][current_vertex[1]] == false) {
      visited[current_vertex[0]][current_vertex[1]] = true;
      if ((current_vertex[0] == M - 1) && (current_vertex[1] == N - 1)) {
        cout << "yes";
        return 0;
      }

      int desired_val = grid[current_vertex[0]][current_vertex[1]];
      for (int i = 1; i < (int) sqrt(desired_val) + 1; i++) {
        if (desired_val % i == 0) {
          if (i <= M && desired_val / i <= N) {
            if (visited[i - 1][(desired_val / i) - 1] == false) {
              visit.push({i - 1, (desired_val / i) - 1});
            }
          }

          if (i <= N && desired_val / i <= M) {
            if (visited[(desired_val / i) - 1][i - 1] == false) {
              visit.push({(desired_val / i) - 1, i - 1});
            }
          }
        }
      }
    }
  }

  cout << "no";

  return 0;
}