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
        cin >> n;

        ll ans = 1;

        while(n%ans==0){
            ans++;
        }
        ans=ans-1;
        cout<<ans<<"\n";
    }
    
    return 0;
}


/*

 Move-Item ".\B_Longest_Divisors_Interval.cpp" ".\900\B_Longest_Divisors_Interval.cpp"
git add "900/B_Longest_Divisors_Interval.cpp"
git commit -m "B_Longest_Divisors_Interval.cpp"
git push origin master
*/