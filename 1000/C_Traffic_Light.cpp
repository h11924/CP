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
        ll n;
        char c;
        cin>>n>>c;

        string s;
        cin>>s;

        if (c == 'g') {
        cout << 0 << "\n";
        continue;
    }

        s=s+s;

        ll nextg=-1;
        ll maxi=0;

        for(ll i=2 * n - 1;i>=0;i--){
            if(s[i]=='g'){
                nextg=i;
            }
            if(s[i]==c && nextg!=-1){
                maxi=max(maxi,nextg-i);
            }
        }

        cout<<maxi<<endl;



    }
    
    return 0;
}


/*

Move-Item ".\C_Traffic_Light.cpp" ".\1000\C_Traffic_Light.cpp"
git add "1000\C_Traffic_Light.cpp"
git commit -m "C_Traffic_Light.cpp"
git pull --rebase origin master
git push origin master

*/