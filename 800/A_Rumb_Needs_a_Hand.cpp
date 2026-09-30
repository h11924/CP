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
        ll n ;
        cin>>n;

        vector<ll>pp(n);

         for(int i = 0; i < n; i++){
            cin >> pp[i];
        }
         
    vector<ll> ind;
    vector<ll> val;
        
        for(int i = 0; i < n; i++){
        if(pp[i] != i + 1){
            ind.push_back(i + 1);
            val.push_back(pp[i]);
        }
    }

    reverse(ind.begin(), ind.end());

    if(ind == val)
        cout << "YES\n";
    else
        cout << "NO\n";
}



        
    
    return 0;
}


/*

Move-Item ".\A_Rumb_Needs_a_Hand.cpp" ".\800\A_Rumb_Needs_a_Hand.cpp"
git add "800/A_Rumb_Needs_a_Hand.cpp"
git commit -m "A_Rumb_Needs_a_Hand.cpp"
git pull --rebase origin master
git push origin master

*/