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
        string s;
        cin>>s;

      
        ll n = s.size();
        ll l = 0, r = 0, k = 0;

        while (r < n) {
            if (s[r] == '1') {
            k = max(k, r - l + 1);
        }
            else {
                l = r + 1;
        }
            r++;
        }

        ll pre = 0, suf = 0;

        while (pre < n && s[pre] == '1') {
            pre++;
        }

        while (suf < n && s[n - 1 - suf] == '1') {
            suf++;
        }

        k = max(k, min(n, pre + suf));

        ll ans = ((k + 1) / 2) * ((k + 2) / 2);

        
        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_JoJo_s_Incredible_Adventures.cpp" ".\1100\B_JoJo_s_Incredible_Adventures.cpp"
git add "1100/B_JoJo_s_Incredible_Adventures.cpp"
git commit -m "B_JoJo_s_Incredible_Adventures.cpp"
git pull --rebase origin master
git push origin master

*/