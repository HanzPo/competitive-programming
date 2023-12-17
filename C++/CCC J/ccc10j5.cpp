#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int start_x, start_y, end_x, end_y;
  cin >> start_x >> start_y >> end_x >> end_y;

  bool found = false;
  vector<array<int, 2>> valid_moves;
  int moves = 0;

  if (start_x == end_x && start_y == end_y) {
    cout << moves;
    return 0;
  }

  while (!found) {
    if ((int)valid_moves.size() == 0) {
      valid_moves.push_back({start_x + 1, start_y + 2});
      valid_moves.push_back({start_x + 2, start_y + 1});
      valid_moves.push_back({start_x + 2, start_y - 1});
      valid_moves.push_back({start_x + 1, start_y - 2});
      valid_moves.push_back({start_x - 1, start_y - 2});
      valid_moves.push_back({start_x - 2, start_y - 1});
      valid_moves.push_back({start_x - 2, start_y + 1});
      valid_moves.push_back({start_x - 1, start_y + 2});

    } else {
      vector<array<int, 2>> new_valid_moves;

      for (int i = 0; i < (int)valid_moves.size(); i++) {
        new_valid_moves.push_back({valid_moves[i][0] + 1, valid_moves[i][1] + 2});
        new_valid_moves.push_back({valid_moves[i][0] + 2, valid_moves[i][1] + 1});
        new_valid_moves.push_back({valid_moves[i][0] + 2, valid_moves[i][1] - 1});
        new_valid_moves.push_back({valid_moves[i][0] + 1, valid_moves[i][1] - 2});
        new_valid_moves.push_back({valid_moves[i][0] - 1, valid_moves[i][1] - 2});
        new_valid_moves.push_back({valid_moves[i][0] - 2, valid_moves[i][1] - 1});
        new_valid_moves.push_back({valid_moves[i][0] - 2, valid_moves[i][1] + 1});
        new_valid_moves.push_back({valid_moves[i][0] - 1, valid_moves[i][1] + 2});
      }

      valid_moves.clear();
      valid_moves = new_valid_moves;
    }

    for (int i = 0; i < (int)valid_moves.size(); i++) {
      if (valid_moves[i][0] < 1 || valid_moves[i][1] < 1 ||
          valid_moves[i][0] > 8 || valid_moves[i][1] > 8) {
        valid_moves.erase(valid_moves.begin() + i);
        i--;
      }
    }

    moves++;

    for (int i = 0; i < (int)valid_moves.size(); i++) {
      if (valid_moves[i][0] == end_x && valid_moves[i][1] == end_y) {
        cout << moves;
        found = true;
        return 0;
      }
    }
  }

  return 0;
}