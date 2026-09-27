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
        ll x,y,k;
        cin>>x>>y>>k;

        //ll sticksops=((k*y)+(x-1))/x-1;
        //ll sticksops=(k*y + k - 1)/(x - 1);//this is for floor division
        ll sticksops=(k*y+k-2)/(x-1)+1;//and we need ceil division bro
        ll coalops=k;

        ll ans=sticksops+coalops;

        cout<<ans<<endl;


    }
    
    return 0;
}


/*

Move-Item ".\A_Buying_Torches.cpp" ".\1000\A_Buying_Torches.cpp"
git add "1000/A_Buying_Torches.cpp"
git commit -m "A_Buying_Torches.cpp"
git pull --rebase origin master
git push origin master

*/