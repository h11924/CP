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
        cin>>n;

        vector<pair<ll,ll>>aa;
        for(int i=1;i<n+1;i++){
            ll a;
            cin>>a;
            aa.push_back({a,i});
        }

        sort(aa.rbegin(),aa.rend());

        ll minutes=0;
        vector<ll> ans(n+1);

        ll coord=0;
        ans[0]=0;

        /*for(int i=0;i<n;i++){
            //we will add in ans  first
            ans[coord]=(aa[i].second);

            //+ it 
            minutes+=2*(aa[i].first * (i/2 + 1));

            if(coord>0){
                coord=-coord;
            }
        }*/
        ans[0]=0;

for(int i=0;i<n;i++){
ll d=i/2+1;

if(i%2==0){
ans[aa[i].second]=d;
}
else{
ans[aa[i].second]=-d;
}

minutes+=2*aa[i].first*d;
}

        cout<<minutes<<endl;
        for(int i=0;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}


/*

Move-Item ".\B_Divan_and_a_New_Project.cpp" ".\1000\B_Divan_and_a_New_Project.cpp"
git add "1000/B_Divan_and_a_New_Project.cpp"
git commit -m "B_Divan_and_a_New_Project.cpp"
git pull --rebase origin master
git push origin master

*/