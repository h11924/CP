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
        ll n;
        cin>>n;

        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        vector<ll> v(n-4);
        //making trails of each element in the array
        for(int i=0;i<n-4;i++){
            v[i]=a[i]+a[i+2]-a[i+4];
        }
        //make a map 
        map<ll,ll> mp;
        ll ans=0;

        for(int i=0;i<n-4;i++){
            if(i>=5){
                mp[v[i-5]]++;
            }

        ans+=mp[v[i]];
}

        cout << ans << '\n';


    }
    
    return 0;
}


/*

Move-Item ".\C_Unrequited_Love.cpp" ".\contest\C_Unrequited_Love.cpp"
git add "contest/C_Unrequited_Love.cpp"
git commit -m "C_Unrequited_Love.cpp"
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
ll n;
cin >> n;

vector<ll> a(n);

for(int i=0;i<n;i++){
cin >> a[i];
}

vector<ll> v(n-4);

for(int i=0;i<n-4;i++){
v[i]=a[i]+a[i+2]-a[i+4];
}

map<ll,ll> mp[2];
map<ll,ll> safe[2];

ll ans=0;

for(int i=0;i<n-4;i++){
if(i>=6){
safe[i%2][v[i-6]]++;
}

ans += mp[1-i%2][v[i]];
ans += safe[i%2][v[i]];

mp[i%2][v[i]]++;
}

cout << ans << '\n';
}

int main() {
fast_io();

int t;
cin >> t;

while(t--){
solve();
}

return 0;
}