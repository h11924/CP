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

void solve() {
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;

    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort in increasing order
        sort(a.begin(), a.end());

        // If min == max, all elements are identical
        if (a[0] == a[n - 1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            // Print the largest element first
            cout << a[n - 1];
            // Print the remaining elements (from index 0 to n-2)
            for (int i = 0; i < n - 1; i++) {
                cout << " " << a[i];
            }
            cout << "\n";
        }
    
    }
    
    return 0;
}


