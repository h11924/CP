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
        ll n,a,b;
        cin>>n>>a>>b;

        if ((a == n && b == n) || (a + b <= n - 2))             cout << "Yes\n";
        else  cout<<"no"<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_Two_Permutations.cpp" ".\800\A_Two_Permutations.cpp"
git add "800/A_Two_Permutations.cpp"
git commit -m "A_Two_Permutations.cpp"
git pull --rebase origin master
git push origin master

*/