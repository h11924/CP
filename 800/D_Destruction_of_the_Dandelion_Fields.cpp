#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(){
        int n;
        cin >> n;
        vector<ll> a(n);
        ll total_dandelions = 0;
        vector<ll> odd_fields;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 != 0) {
                odd_fields.push_back(a[i]);
            }
            total_dandelions += a[i];
        }

        if (odd_fields.empty()) {
            cout << 0 << endl;
        } else {
            sort(odd_fields.begin(), odd_fields.end(), greater<ll>());
            ll cut_dandelions = 0;
           
            ll sum_even = total_dandelions;
            for(ll odd_val : odd_fields){
                sum_even -= odd_val;
            }
            
            for(size_t i = 0; i < odd_fields.size(); ++i){
                if(i % 2 == 0){ 
                    cut_dandelions += odd_fields[i];
                }
            }
            
            cout << sum_even + cut_dandelions << endl;
        }
    }
};

int main(){
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