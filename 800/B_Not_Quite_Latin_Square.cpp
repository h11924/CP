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

        
        vector<vector<char>> abc(3,vector<char>(3));
        ll aa=0;
        ll bb=0;
        ll cc=0;
        for(ll i=0;i<3;i++){
            for(ll j=0;j<3;j++){
                cin>>abc[i][j];
                if(abc[i][j]=='A'){
                    aa++;
                }else if(abc[i][j]=='B'){
                    bb++;
                }else if(abc[i][j]=='C'){
                    cc++;
                }

            }
        }
        
                if(aa==2) cout<<'A'<<endl;
                else if(bb==2) cout<<'B'<<endl;
                else if(cc==2) cout<<'C'<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Quite_Latin_Square.cpp" ".\800\B_Quite_Latin_Square.cpp"
git add "800/B_Quite_Latin_Square.cpp"
git commit -m "AB_Quite_Latin_Square.cpp"
git pull --rebase origin master
git push origin master

*/