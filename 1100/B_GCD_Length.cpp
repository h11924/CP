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


        //x=1 1 
        //x=2 10 power(10,a-1)
        //x=3 100 pow(10,a-1)

        ll x=pow(10,a-1);
        ll y=pow(10,b-1)+pow(10,c-1);

        cout<<x<<" "<<y<<endl;

    }
    
    return 0;
}


/*

Move-Item ".\B_GCD_Length.cpp" ".\1100\B_GCD_Length.cpp"
git add "1100/B_GCD_Length.cpp"
git commit -m "B_GCD_Length.cpp"
git pull --rebase origin master
git push origin master

*/