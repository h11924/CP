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
    
    ll n;
    cin>>n;

    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=0;
    //so we will find the gcd and than count the dividors of gcd to see how many numbers divide these number
    ll gcdd = a[0];
    for(int i=1;i<n;i++){
        gcdd = __gcd(gcdd, a[i]);
    }
    //now when we have a gcd lets find the dividors of of gcd
    for(ll i=1;i*i<=gcdd;i++){
if(gcdd%i==0){
ans++;
if(i!=gcdd/i) ans++;
}
}

    cout<<ans<<endl;
    
    return 0;
}


/*

Move-Item ".\C_Common_Divisors.cpp" ".\1300\C_Common_Divisors.cpp"
git add "1300/C_Common_Divisors.cpp"
git commit -m "C_Common_Divisors.cpp"
git pull --rebase origin master
git push origin master

*/