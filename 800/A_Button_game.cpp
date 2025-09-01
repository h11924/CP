#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for(int test = 0; test < t; test++) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        if(c % 2 == 1) {
            if(b > a) {
                cout << "Second" << endl;
            } else {
                cout << "First" << endl;
            }
        } else {
            if(a > b) {
                cout << "First" << endl;
            } else {
                cout << "Second" << endl;
            }
        }
    }
    
    return 0;
}
