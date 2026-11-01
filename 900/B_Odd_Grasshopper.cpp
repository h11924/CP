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
       ll x,n;
        cin>>x>>n;
/*
        ll ans=x;
        //first ans=1; n=n-1;
        //odd right ....ans= ans+n

        for(ll i=1;i<=n;i++){
            if(ans%2==0){
                //if odd than right 
                ans+=i;
            }else {
                //x is even than left
                ans+=i;
            }


        }

        cout<<ans<<"\n";*/
        ll rem = n % 4;
    ll d = 0; // Total displacement

    if (rem == 1) {
        d = -n;
    } else if (rem == 2) {
        d = 1;
    } else if (rem == 3) {
        d = n + 1;
    } else { // rem == 0
        d = 0;
    }

    // If initial coordinate is odd, flip the sign of displacement
    if (x % 2 != 0) {
        d = -d;
    }

    cout << x + d << "\n";
    }
    
    return 0;
}


/*

Move-Item ".\B_Odd_Grasshopper.cpp" ".\900\B_Odd_Grasshopper.cpp"
git add "900/B_Odd_Grasshopper.cpp"
git commit -m "B_Odd_Grasshopper.cpp"
git pull --rebase origin master
git push origin master

*/