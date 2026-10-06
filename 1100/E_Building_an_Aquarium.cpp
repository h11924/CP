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

ll solve(ll h, vector<ll>& a) {
ll w=0;

for(int i=0;i<a.size();i++){
if(a[i]<h){
w+=h-a[i];
}
}

return w;
}

int main() {
fast_io();

int t=1;
cin>>t;

while(t--){
ll n,x;
cin>>n>>x;

vector<ll>a(n);

for(int i=0;i<n;i++){
cin>>a[i];
}

ll low=1;
ll high=2000000000LL;
ll ans=1;

while(low<=high){
ll mid=low+(high-low)/2;

ll w=solve(mid,a);

if(w<=x){
ans=mid;
low=mid+1;
}
else{
high=mid-1;
}
}

cout<<ans<<endl;
}

return 0;
}

/*

Move-Item ".\E_Building_an_Aquarium.cpp" ".\1100\E_Building_an_Aquarium.cpp"
git add "1100/E_Building_an_Aquarium.cpp"
git commit -m "E_Building_an_Aquarium.cpp"
git pull --rebase origin master
git push origin master

*/