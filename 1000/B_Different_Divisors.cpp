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

bool prime(ll n){
if(n<2) return false;
for(ll i=2;i*i<=n;i++){
if(n%i==0) return false;
}
return true;
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll d;
        cin>>d;

        ll n=d+1;

        while(!prime(n)){
            n++;

        }
        ll next=n+d;
        while(!prime(next)){
            next++;
        }

        ll ans=next*n;

        cout<<ans<<endl;
        
    }
    
    return 0;
}


/*

Move-Item ".\B_Different_Divisors.cpp" ".\1000\B_Different_Divisors.cpp"
git add "1000/B_Different_Divisors.cpp"
git commit -m "B_Different_Divisors.cpp"
git pull --rebase origin master
git push origin master

*/