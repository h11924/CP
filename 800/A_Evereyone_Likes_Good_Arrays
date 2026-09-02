#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}



int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count=0;

        for(int i = 0; i < n - 1; i++) {
            if(a[i]%2 == a[i+1]%2) {
                count++;
            }
        }
        cout << count << "\n";
    }
    
    return 0;
}

