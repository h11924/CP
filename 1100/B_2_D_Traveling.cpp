/*#include <bits/stdc++.h>
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
        ll n,k,a,b;
        cin>>n>>k>>a>>b;

        pair<ll,ll> p1,p2;

        vector<pair<ll,ll>> aa(n);
        for(int i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            if(i==a-1){
                p1.first=x;
                p1.second=y;

                aa[i].first=x;
                aa[i].second=y;
            }
            if(i==b-1){
                p2.first=x;
                p2.second=y;

                aa[i].first=x;
                aa[i].second=y;
            }
            else{
                aa[i].first=x;
                aa[i].second=y;
                
            }
        }

        //starting point is 1 and endding point is 2


    
    
    //so now we have x,y,staring/ending and is major
    //so we have a and b here

    //lets find the minimum distance btw a and b.
    ll mini_btw_aandb=abs(p1.first-p2.first)+(p1.second-p2.second);

    //now lets find the diatnce btw the a to all major and b to all major 
    ll min_dist_a_to_major = LLONG_MAX;
    ll min_dist_b_to_major = LLONG_MAX;
    for(int i=0;i<aa.size();i++){
        if(aa[i].second.second==true){
            ll dist_a = abs(p1.first-aa[i].first.first)+abs(p1.second-aa[i].first.second);
            ll dist_b = abs(p2.first-aa[i].first.first)+abs(p2.second-aa[i].first.second);
            min_dist_a_to_major = min(min_dist_a_to_major,dist_a);
            min_dist_b_to_major = min(min_dist_b_to_major,dist_b);
        }
    }

    ll ans = min(mini_btw_aandb, min_dist_a_to_major + min_dist_b_to_major);
    cout<<ans<<endl;

    
    return 0;
}


/*

Move-Item ".\B_2_D_Travelling.cpp" ".\1100\B_2_D_Travelling.cpp"
git add "1100/B_2_D_Travelling.cpp"
git commit -m "B_2_D_Travelling.cpp"
git pull --rebase origin master
git push origin master

*/


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

int t=1;
cin>>t;

while(t--){
ll n,k,a,b;
cin>>n>>k>>a>>b;

pair<ll,ll> p1,p2;

vector<pair<ll,ll>> aa(n);

for(int i=0;i<n;i++){
ll x,y;
cin>>x>>y;

aa[i].first=x;
aa[i].second=y;

if(i==a-1){
p1.first=x;
p1.second=y;
}

if(i==b-1){
p2.first=x;
p2.second=y;
}
}

ll mini_btw_aandb=abs(p1.first-p2.first)+abs(p1.second-p2.second);

ll min_dist_a_to_major=LLONG_MAX;
ll min_dist_b_to_major=LLONG_MAX;

for(int i=0;i<k;i++){
ll dist_a=abs(p1.first-aa[i].first)+abs(p1.second-aa[i].second);
ll dist_b=abs(p2.first-aa[i].first)+abs(p2.second-aa[i].second);

min_dist_a_to_major=min(min_dist_a_to_major,dist_a);
min_dist_b_to_major=min(min_dist_b_to_major,dist_b);
}

ll ans=mini_btw_aandb;

if(k>0){
ans=min(ans,min_dist_a_to_major+min_dist_b_to_major);
}

cout<<ans<<endl;
}

return 0;
}