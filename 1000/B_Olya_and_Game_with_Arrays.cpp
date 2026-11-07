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

        

         vector<ll> secondmin;
        vector<ll> firstmin;

        for (ll k = 0; k < n; k++) {
            ll m;
            cin >> m;

            vector<ll> a(m);
            for (ll i = 0; i < m; i++) {
                cin >> a[i];
            }

            // CHANGE 3: Sort the local array 'a' to easily and accurately 
            // extract min1 (a[0]) and min2 (a[1]).
            sort(a.begin(), a.end());

            ll min1 = a[0];
            ll min2 = a[1];

            // CHANGE 4: Fix variable assignment!
            // min1 goes into firstmin, min2 goes into secondmin.
            firstmin.push_back(min1);
            secondmin.push_back(min2);
        }

           sort(secondmin.begin(), secondmin.end());
           ll overall_min1 = *min_element(firstmin.begin(), firstmin.end());

           ll ans = overall_min1;
        for (ll i = 1; i < secondmin.size(); i++) {
            ans += secondmin[i];
        }

        cout << ans << "\n";

    }
    
    return 0;
}


/*

Move-Item ".\B_Olya_and_Game_with_Arrays.cpp" ".\1000\B_Olya_and_Game_with_Arrays.cpp"
git add "1000/B_Olya_and_Game_with_Arrays.cpp"
git commit -m "B_Olya_and_Game_with_Arrays.cpp"
git pull --rebase origin master
git push origin master

*/

/**
 * #include <bits/stdc++.h>
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
        cin >> n;

        // CHANGE 1: Do not initialize vectors with size n if you use push_back!
        // vector<ll> secondmin(n); vector<ll> firstmin(n); causes size to double to 2*n.
       

        // CHANGE 2: Use a separate loop counter (like 'k') instead of while(n--)
        // so that 'n' retains its original value for operations after the loop.
        

        // CHANGE 5: Sort secondmin so that secondmin[0] is guaranteed to be the smallest min2.
      

        // CHANGE 6: Find the absolute minimum overall from firstmin (*min_element).
        // Using firstmin[0] only gave the min1 of the 1st input array, not overall min1!
        ll overall_min1 = *min_element(firstmin.begin(), firstmin.end());

        // CHANGE 7: Start ans with overall_min1, then sum secondmin from index 1 to n-1
        // (which skips secondmin[0], the smallest min2).
        ll ans = overall_min1;
        for (ll i = 1; i < secondmin.size(); i++) {
            ans += secondmin[i];
        }

        cout << ans << "\n";
    }
    
    return 0;
}

/*

Move-Item ".\B_Make_Almost_Equal_With_Mod.cpp" ".\1200\B_Make_Almost_Equal_With_Mod.cpp"
git add "1200/B_Make_Almost_Equal_With_Mod.cpp"
git commit -m "B_Make_Almost_Equal_With_Mod.cpp"
git pull --rebase origin master
git push origin master

*/
