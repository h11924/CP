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
        //1 to n
        //k distinct
        //sum of x 

        //n,k,x

        ll n,k,x;
        cin >> n >> k >> x;

        

        
        ll mini=k*(k+1)/2;
        ll maxi=k*(2*n-k+1)/2;

        if(x<mini || x>maxi){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}


/*
git add "900/C_Vasilije_in_Cacak.cpp"
git commit -m "C_Vasilije_in_Cacak.cpp"
git push origin master
*/

