/*#include <bits/stdc++.h>
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
        ll n,m;
        cin>>n>>m;

        string p,q;
        cin>>p>>q;

        vector<ll> pvector(256,0);
        vector<ll> qvector(256,0);
        vector<ll> nn(256,0);

        for(ll i=0;i<p.size();i++){
            pvector[i]++;
        }
        for(ll i=0;i<p.size();i++){
            qvector[i]++;
        }
        for(ll i=0;i<p.size();i++){
            nn[i]=abs(p[i]-q[i]);
        }

        // mai vo sab hai jo bacha hai
        

        map<char,ll> mp;
        for(ll i=0;i<nn.size();i++){
            mp[nn[i]]++;
        }

        /*if(mp.size()>3){
            cout<<'NO'<<endl;
        }else{
            bool correct=false;
            for(ll i=0;i<nn.size();i++){
                if(nn[i-'s']==1 && )
            
        }
        if (mp.size() > 3) {
            cout << "NO" << "\n";
        } else {
            bool correct = true;
            for (ll i = 0; i < min(n, m); i++) {
                if (nn[i] > 1) {
                    correct = false;
                    break;
                }
            }
            if (correct) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }

    }
    
    return 0;
}*/



/*

Move-Item ".\B_Make_Almost_Equal_With_Mod.cpp" ".\1200\B_Make_Almost_Equal_With_Mod.cpp"
git add "1200/B_Make_Almost_Equal_With_Mod.cpp"
git commit -m "B_Make_Almost_Equal_With_Mod.cpp"
git pull --rebase origin master
git push origin master

*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string p, q;
    cin >> p >> q;

    vector<int> count_p(26, 0);
    vector<int> count_q(26, 0);

    for (char c : p) {
        count_p[c - 'a']++;
    }

    for (char c : q) {
        count_q[c - 'a']++;
    }

    // Check if denominator 'q' can be fully cancelled out
    for (int i = 0; i < 26; i++) {
        if (count_p[i] < count_q[i]) {
            cout << "NO\n";
            return;
        }
        count_p[i] -= count_q[i]; // Perform cancellation
    }

    // Check if remaining numerator characters are exactly one 's', one 'i', one 'x'
    bool is_six = (count_p['s' - 'a'] == 1 &&
                   count_p['i' - 'a'] == 1 &&
                   count_p['x' - 'a'] == 1);

    int total_remaining = 0;
    for (int i = 0; i < 26; i++) {
        total_remaining += count_p[i];
    }

    // Total remaining characters must be exactly 3 ('s', 'i', 'x')
    if (is_six && total_remaining == 3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}


/*Move-Item ".\A_Fraction_and_Six.cpp" ".\contest\A_Fraction_and_Six.cpp"
git add "contest/A_Fraction_and_Six.cpp"
git commit -m "A_Fraction_and_Six.cpp"
git pull --rebase origin master
git push origin master
*/