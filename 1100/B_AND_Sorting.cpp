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
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n;
        cin>>n;

        ll x=(1LL << 30) - 1;
        //can also use LONG_MAX HERE AS ALL THE DIDGITS HERE ARE 111111 ONLY 

        

        for(ll i=0;i<=n-1;i++){
            ll p;
            cin>>p;

            if(p!=i){
                x=x&p;
            }

            

            


        }

        cout<<x<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_AND_Sorting.cpp" ".\1100\B_AND_Sorting.cpp"
git add "1100/B_AND_Sorting.cpp"
git commit -m "B_AND_Sorting.cpp"
git pull --rebase origin master
git push origin master

*/