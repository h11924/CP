#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;

const ll MOD=1e9+7;

void fast_io() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}

void solve() {
ll n;
cin>>n;

vector<ll> a(n),b(n);

for(ll i=0;i<n;i++){
cin>>a[i];
}

for(ll i=0;i<n;i++){
cin>>b[i];
}

sort(a.begin(),a.end());
sort(b.rbegin(),b.rend());

ll ans=1;

for(ll i=0;i<n;i++){
ll x=upper_bound(a.begin(),a.end(),b[i])-a.begin();
ll cnt=n-x;
ll ways=cnt-i;

if(ways<=0){
ans=0;
break;
}

ans=ans*ways%MOD;
}

cout<<ans<<"\n";
}

int main() {
fast_io();

int t;
cin>>t;

while(t--){
solve();
}

return 0;
}