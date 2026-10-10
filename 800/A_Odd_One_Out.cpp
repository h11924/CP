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
        ll a,b,c;
        cin>>a>>b>>c;

        if(a==b) cout<<c<<endl;
        if(b==c) cout<<a<<endl;
        if(c==a) cout<<b<<endl;
        
    }
    
    return 0;
}


/*

Move-Item ".\A_Odd_One_Out.cpp" ".\800\A_Odd_One_Out.cpp"
git add "800/A_Odd_One_Out.cpp"
git commit -m "A_Odd_One_Out.cpp"
git pull --rebase origin master
git push origin master

*/