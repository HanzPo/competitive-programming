#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string votes;

    cin >> n >> votes;

    int a = 0;
    int b = 0; 

    for (int i = 0; i < n; i++){
      if (votes[i] == 'A') a++;
      if (votes[i] == 'B') b++;
    }

    if (a > b) {
      cout << "A";
    }
    else if (a < b) {
      cout << "B";
    }
    else {
      cout << "Tie";
    }
    
    return 0;
}