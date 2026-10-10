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
        ll n,k;
        cin>>n>>k;

        ll gold=0;

        ll ans=0;

        for(int i=0;i<n;i++){
            ll a;

            cin>>a;
            if(a>=k && a>0) gold+=a;
            else if(a==0 && gold>0){
                gold--;
                ans++;
            }

            
            
        }
        cout<<ans<<endl;

        /*if(gold>zero){
            cout<<zero<<endl;
        }else if(gold<zero){
            cout<<gold<<endl;
        }else if(zero==0 || gold==0){
            cout<<0<<endl;
        }else{
            cout<<gold<<endl;
        }*/

        //cout<<min(gold,zero)<<'\n';
       
    }
    
    return 0;
}


/*

Move-Item ".\A_Robin_Helps.cpp" ".\800\A_Robin_Helps.cpp"
git add "800/A_Robin_Helps.cpp"
git commit -m "A_Robin_Helps.cpp"
git pull --rebase origin master
git push origin master

*/