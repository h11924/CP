#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(){
        int n;
        cin >> n;
        int neg_count = 0;
        int zero_count = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a < 0) {
                neg_count++;
            } else if (a == 0) {
                zero_count++;
            }
        }
        
        int operations = 0;
        
        // Operations to deal with zeros: each zero needs 1 operation
        operations += zero_count;
        
        // Operations to deal with odd number of negatives: one negative needs 2 operations
        if (neg_count % 2 != 0) {
            operations += 2;
        }
        
        cout << operations << endl;
    }
};

int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        Solution sol;
        sol.solve();
    }
    return 0;
}
