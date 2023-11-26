#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int lim;
    int spd;
    
    cin >> lim >> spd;
    
    if (spd <= lim) {
        cout << "Congratulations, you are within the speed limit!";
    }
    else if (spd - lim <= 20) {
        cout << "You are speeding and your fine is $" << 100 << ".";
    }
    else if (spd - lim <= 30) {
        cout << "You are speeding and your fine is $" << 270 << ".";
    }
    else {
        cout << "You are speeding and your fine is $" << 500 << ".";
    }
    
    return 0;
}