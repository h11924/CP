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

        //ll answer = pow(2,n-k+1)+pow(k-1);
        ll answer = pow(2,n-k+1) + 2*(k-1);
     

        cout<<answer<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_SauSaGe_Bank.cpp" ".\contest\A_SauSaGe_Bank.cpp"
git add "contest/A_SauSaGe_Bank.cpp"
git commit -m "A_SauSaGe_Bank.cpp"
git pull --rebase origin master
git push origin master

*/