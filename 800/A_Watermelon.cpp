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
    
    
    ll w;
    cin>>w;

    if(w%2==0 && w>2) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
    return 0;
}


/*

Move-Item ".\A_Watermelon.cpp" ".\800\A_Watermelon.cpp"
git add "800/A_Watermelon.cpp"
git commit -m "A_Watermelon.cpp"
git pull --rebase origin master
git push origin master

*/