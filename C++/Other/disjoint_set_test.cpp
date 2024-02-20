#include <bits/stdc++.h>

using namespace std;

int find(int node, int tree_info[][2]) {
  if (tree_info[node][0] == node) {
    return node;
  }

  return find(tree_info[node][0], tree_info);
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // Input the number of edges and nodes
  int N, M;
  cin >> N >> M;

  // 2D array containing list of edges and the associated nodes
  int edges[M][2];
  // 2D array containing list of parents and ranks of each node
  int tree_info[N][2];

  vector<int> edges_in_mst;

  for (int i = 0; i < N; i++) {
    tree_info[i][0] = i;
    tree_info[i][1] = 0;
  }

  for (int i = 0; i < M; i++) {
    cin >> edges[i][0] >> edges[i][1];
    edges[i][0]--;
    edges[i][1]--;
  }

  for (int i = 0; i < M; i++) {
    int root_1 = find(edges[i][0], tree_info);
    int root_2 = find(edges[i][1], tree_info);

    if (root_1 == root_2) {
      continue;
    } else if (tree_info[root_1][1] > tree_info[root_2][1]) {
      edges_in_mst.push_back(i + 1);
      tree_info[root_2][0] = root_1;
      tree_info[root_1][1]++;
    } else {
      edges_in_mst.push_back(i + 1);
      tree_info[root_1][0] = root_2;
      tree_info[root_2][1]++;
    }
  }

  // A connected graph must have N-1 edges in its minimum spanning tree
  if ((int) edges_in_mst.size() == N - 1) {
    for (int i = 0; i < N - 1; i++) {
      cout << edges_in_mst[i] << "\n";
    }
  } else {
    cout << "Disconnected Graph";
  }

  return 0;
}