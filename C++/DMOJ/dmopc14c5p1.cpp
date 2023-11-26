#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int r, h;

    cin >> r >> h;

    cout << (3.1415926535 * pow(r, 2) * h) / 3;
    
    return 0;
}