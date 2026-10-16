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
        ll n,k;
        cin>>n>>k;

        vector<ll>a(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        bool found=false;

        for(ll i=0;i<n;i++){
            ll ans=sum-(2*a[i]);
            if(ans==k) {
                found=true;
                break;
            }
        }

        if(found==true){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    
    return 0;
}


/*

Move-Item ".\B_Subract_Opeartion.cpp" ".\1100\B_Subract_Opeartion.cpp"
git add "1100/B_Subract_Opeartion.cpp"
git commit -m "B_Subract_Opeartion.cpp"
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

int main() {
fast_io();

int t;
cin >> t;

while(t--) {
ll n,k;
cin >> n >> k;

vector<ll>a(n);
set<ll>st;

for(ll i=0;i<n;i++){
cin >> a[i];
st.insert(a[i]);
}

bool found=false;

for(ll i=0;i<n;i++){
if(st.count(a[i]-k)){
found=true;
break;
}
}

cout << (found ? "YES" : "NO") << '\n';
}

return 0;
}
