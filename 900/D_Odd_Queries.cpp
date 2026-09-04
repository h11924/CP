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
        ll n,q;
        cin >> n >> q;

        vector<ll>a(n + 1);
        for(int i=1;i<=n;i++){
            ll p;
            cin>>p;
            a[i]=p;
        }

        while(q--){

            ll l,r,k;
            cin>>l>>r>>k;

            ll seg1=0;
            ll seg2=0;

            ll sumfull=0;
            ll sumlr=0;


            for(int i=1;i<=n;i++){

                sumfull+=a[i];

                if(i>=l && i<=r){
                    sumlr+=a[i];
                }

            }

            //seg2=l-r+1;
            seg2=(r-l+1)*k;
            seg1=sumfull-sumlr;

            if(seg1%2==seg2%2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }


            
        }
    }
    
    return 0;
}


/*

 Move-Item ".\D_Odd_Queries.cpp" ".\900\D_Odd_Queries.cpp"
git add "900/D_Odd_Queries.cpp"
git commit -m "D_Odd_Queries(TLE SOLUTION).cpp"
git push origin master
*/