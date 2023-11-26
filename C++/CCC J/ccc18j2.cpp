#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string yes;
    string tdy;
    
    cin >> n >> yes >> tdy;
    
    int common = 0;
    
    for (int i = 0; i < n; i++) {
        if (yes[i] == tdy[i] && yes[i] == 'C') {
            common++;
        }
    }
    
    cout << common;
    
    return 0;
}