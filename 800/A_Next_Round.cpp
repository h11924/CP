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
    
   
    
    ll n,k;
    cin>>n>>k;

   

    vector<ll> a(n);
for(ll i=0;i<n;i++){
cin>>a[i];
}
ll ans=0;
for(ll i=0;i<n;i++){
if(a[i]>=a[k-1] && a[i]>0){
ans++;
}
}
    cout<<ans<<endl;


    
    return 0;
}


/*

Move-Item ".\A_Next_Round.cpp" ".\800\A_Next_Round.cpp"
git add "800/A_Next_Round.cpp"
git commit -m "A_Next_Round.cpp"
git pull --rebase origin master
git push origin master

*/