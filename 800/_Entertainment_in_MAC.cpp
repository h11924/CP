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
        //travel in the string n see if it small return same else do reverse till you get the smallest 4

        ll n;
        cin>>n;

        string s;
        cin>>s;

        string r = s;
        reverse(r.begin(), r.end());


        if(r < s) s = r + s;

        cout<<s<<endl;

    }
    
    return 0;
}


/*

Move-Item ".\A_Entertainment_in_MAC.cpp" ".\800\_Entertainment_in_MAC.cpp"
git add "800/_Entertainment_in_MAC.cpp"
git commit -m "Entertainment_in_MAC.cpp"
git pull --rebase origin master
git push origin master

*/