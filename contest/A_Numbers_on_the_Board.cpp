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
        ll l,r;
        cin>>l>>r;

        //is 0 is not included in the ranfe 
        //if zero included than we will remove the extra but keep the pairs and 0
        if (l > 0 || r < 0) cout << r - l << "\n";
        else cout << max(0LL, abs(l + r) - 1) << "\n";
    }
    
    return 0;
}


/*

Move-Item ".\A_Numbers_on_the_Board.cpp" ".\contest\A_Numbers_on_the_Board.cpp"
git add "contest/A_Numbers_on_the_Board.cpp"
git commit -m "A_Numbers_on_the_Board.cpp"
git pull --rebase origin master
git push origin master

*/