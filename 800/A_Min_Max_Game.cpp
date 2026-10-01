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

      

        ll zero=0;
        ll one=0;

        for(int i=0;i<n;i++){
            ll a;
            cin>>a;

            if(a==0){
                zero++;
            }
            else{
                one++;
            }
        }

        if(one>=zero){
            cout<<"Bessie"<<"\n";
        }else{
            cout<<"Elsie"<<"\n";
        }
    }
    
    return 0;
}


/*

Move-Item ".\A_Min_Max_Game.cpp" ".\1100\A_AvtoBus.cpp"
git add "1100/A_AvtoBus.cpp"
git commit -m "A_AvtoBus.cpp"
git pull --rebase origin master
git push origin master

*/