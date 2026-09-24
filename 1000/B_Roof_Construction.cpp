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

        // ll msb= floor(log(n));
        ll msb=floor(log2(n-1));
        ll stopat= pow(2,msb);

        /*for(int i=stopat-1;i<=0;i--){
            cout<<i<<" ";
        }for(int i=stopat;i<=n;i++){
            cout<<i<<" ";
        }*/
        for(int i=stopat-1;i>=0;i--){
            cout<<i<<" ";
        }
        for(int i=stopat;i<n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Roof_Construction.cpp" ".\1000\B_Roof_Construction.cpp"
git add "1000/B_Roof_Construction.cpp"
git commit -m "B_Roof_Construction.cpp"
git pull --rebase origin master
git push origin master

*/