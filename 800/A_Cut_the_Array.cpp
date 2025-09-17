#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
class Solution {
public:
    void solve(){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> prefix_sum(n + 1, 0);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            prefix_sum[i + 1] = prefix_sum[i] + a[i];
        }
 
        for (int l = 1; l < n; ++l) {
            for (int r = l + 1; r < n; ++r) {
                int s1 = (prefix_sum[l]) % 3;
                int s2 = (prefix_sum[r] - prefix_sum[l]) % 3;
                int s3 = (prefix_sum[n] - prefix_sum[r]) % 3;
 
                if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
                    cout << l << " " << r << endl;
                    return;
                }
            }
        }
        cout << 0 << " " << 0 << endl;
    }
};
 
int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        Solution sol;
        sol.solve();
    }
    return 0;
}
