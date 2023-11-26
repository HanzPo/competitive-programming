#include <bits/stdc++.h>

using namespace std;

int main() {
    int h;
    
    cin >> h;
    
    for (int i = 0; i < h; i++) {
        if (i < ceil(h / 2.0)) {
            for (int j = 0; j < (i * 2) + 1; j++) {
                cout << "*";
            }
            
            for (int j = 0; j < (2 * h) - (((i * 2) + 1) * 2); j++) {
                cout << " ";
            }
            
            for (int j = 0; j < (i * 2) + 1; j++) {
                cout << "*";
            }
            
            cout << "\n";
        } else {
            for (int j = 0; j < ((h - i - 1) * 2) + 1; j++) {
                cout << "*";
            }
            
            for (int j = 0; j < (2 * h) - ((((h - i - 1) * 2) + 1) * 2); j++) {
                cout << " ";
            }
            
            for (int j = 0; j < ((h - i - 1) * 2) + 1; j++) {
                cout << "*";
            }
            
            
            cout << "\n";
        }
    }
    
    return 0;
}