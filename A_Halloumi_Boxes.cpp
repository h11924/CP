#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(ll n ,ll k, vector<ll> a){
        // if array is sorted then return true
        // if array is not sorted but k>1 true
        // if array is not sorted and k < 2 then false

        vector<ll> a_copy = a;
        sort(a_copy.begin(), a_copy.end());

        if(a_copy == a || k > 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sol.solve(n,k,a);
    }
}