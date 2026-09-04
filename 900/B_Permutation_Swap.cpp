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
        ll n;
        cin >> n;

        vector<ll>a(n+1,0);

        for(int i=1;i<=n;i++){
            ll p;
            cin>>p;
            a[i]=p;
        }
        //all the permituations are like 
        //0 rest of the numbers 

        ll maxi=0;
        ll ans=0;
        for(int i=1;i<=n;i++){
            ans=abs(a[i]-i);
            if(ans!=0)
                //maxi=min(maxi,ans);
                maxi=__gcd(maxi,ans);
        }
        
        cout<<maxi<<endl;
    }
    
    return 0;
}


/*

 Move-Item ".\B_Permutation_Swap.cpp" ".\900\B_Permutation_Swap.cpp"
git add "900/B_Permutation_Swap.cpp"
git commit -m "B_Permutation_Swap.cpp"
git push origin master
*/