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

        //so we need to make sure that all extros are also in pair of 3 
        ll r = b % 3;

if(r != 0 && c < 3-r){
cout << -1 << '\n';
continue;
}

c -= (3-r)%3;
cout << a + (b+2)/3 + (c+2)/3 << '\n';

    }
    
    return 0;
}


/*

Move-Item ".\A_Setting_up_Camp.cpp" ".\1100\A_Setting_up_Camp.cpp"
git add "1100/A_Setting_up_Camp.cpp"
git commit -m "A_Setting_up_Camp.cpp"
git pull --rebase origin master
git push origin master

*/