#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(){
        int n;
        ll m;
        cin >> n >> m;
        vector<pair<ll, int>> requirements(n);
        for (int i = 0; i < n; ++i) {
            cin >> requirements[i].first >> requirements[i].second;
        }

        ll total_points = 0;
        ll prev_a = 0;
        int prev_b = 0;

        for (int i = 0; i < n; ++i) {
            ll a_i = requirements[i].first;
            int b_i = requirements[i].second;

            ll time_diff = a_i - prev_a;
            int side_diff = abs(b_i - prev_b);

            ll points_in_segment = 0;

            if (time_diff % 2 == side_diff % 2) {
               
                points_in_segment = time_diff;
            } else {
                
                points_in_segment = time_diff - 1;
            }
            total_points += points_in_segment;

            prev_a = a_i;
            prev_b = b_i;
        }

    
        total_points += (m - prev_a);

        cout << total_points << endl;
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