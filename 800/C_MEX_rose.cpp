#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(){
        int n;
        int k;
        cin >> n >> k;
        
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a <= n) {
                freq[a]++;
            }
        }
        
        int present_count_below_k = 0;
        for (int i = 0; i < k; ++i) {
            if (freq[i] > 0) {
                present_count_below_k++;
            }
        }
        
        int ops_to_get_below_k = k - present_count_below_k;
        int total_ops = ops_to_get_below_k;
        
        if (freq[k] > 0) {
            total_ops += max(0, freq[k] - ops_to_get_below_k);
        }
        
        cout << total_ops << endl;
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