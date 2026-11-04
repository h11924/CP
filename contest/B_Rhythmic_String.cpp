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
        cin>>n;

        //so we bascically want the difference of the elements to be same throughout...
        //so we need to find the maximum number of elements with same differene and when we find them we will subract them from length of string 

        //so this is quite not very easy to thing as we need to keep checking multiple things 
        // we want multiples of few numbers
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        int best = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] % a[i] == 0) cnt++;
            }
            best = max(best, cnt);
        }

        cout << n - best << "\n";
    }
    
    return 0;
}


/*

Move-Item ".\B_Rhythmic_String.cpp" ".\contest\B_Rhythmic_String.cpp"
git add "contest/B_Rhythmic_String.cpp"
git commit -m "B_Rhythmic_String.cpp"
git pull --rebase origin master
git push origin master

*/