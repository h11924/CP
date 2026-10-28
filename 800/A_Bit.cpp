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
    
    ll n;
    cin>>n;
    ll ans=0;
    while (n--) {
        string s;
        cin>>s;

        /*if(s.find()='+'){
            ans++;
        }else if(s.find()='-'){
            ans--;
        }*/
        if (s.find('+') != string::npos) {
            ans++;
        } else {
            ans--;
        }
        
    }

    cout<<ans<<endl;
    
    return 0;
}


/*

Move-Item ".\A_Bit.cpp" ".\800\A_Bit.cpp"
git add "800/A_Bit.cpp"
git commit -m "A_Bit.cpp"
git pull --rebase origin master
git push origin master

*/