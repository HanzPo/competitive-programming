#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  char dir;
  string road;

  vector<char> directions;
  vector<string> roads;

  while (road != "SCHOOL") {
    cin >> dir;
    directions.push_back(dir);
    cin >> road;
    roads.push_back(road);
  }

  for (int i = 0; i < (int) directions.size(); i++) {
    cout << "Turn ";
    if (directions[(int) directions.size() - i - 1] == 'L') {
      cout << "RIGHT";
    }
    else if (directions[(int) directions.size() - i - 1] == 'R') {
      cout << "LEFT";
    }

    if (i == (int) directions.size() - 1) {
      cout << " into your HOME.";
    }
    else {
      cout << " onto " << roads[directions.size() - i - 2] << " street.\n";
    }
  }

  return 0;
}