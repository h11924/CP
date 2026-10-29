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
    
    
    ll ii=0;
    ll jj=0;
    for(ll i=0;i<=4;i++){
        for(ll j=0;j<=4;j++){
            ll a;
            cin>>a;
            if(a==1){
                ii=i;
                jj=j;
                break;
            }
        }
    }

   ll ans=abs(ii-2)+abs(jj-2);
    cout<<ans<<endl;
    return 0;
}


/*

Move-Item ".\A_Beautiful_Matrix.cpp" ".\800\A_Beautiful_Matrix.cpp"
git add "800/A_Beautiful_Matrix.cpp"
git commit -m "A_Beautiful_Matrix.cpp"
git pull --rebase origin master
git push origin master

*/