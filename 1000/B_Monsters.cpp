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

int main() {
    fast_io();

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        ll k;
        cin >> n >> k;

        priority_queue<pair<ll,int>> pq;

        for(int i = 1; i <= n; i++) {
            ll a;
            cin >> a;
            pq.push({a, -i});
        }

        vector<int> ans;

        while(!pq.empty()) {
            pair<ll,int> p = pq.top();
            pq.pop();

            ll a = p.first;
            int i = -p.second;

            a -= k;

            if(a <= 0) {
                ans.push_back(i);
            }
            else {
                pq.push({a, -i});
            }
        }

        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;

}

/*

Move-Item ".\B_Monsters.cpp" ".\1000\B_Monsters.cpp"
git add "1000/B_Monsters.cpp.cpp"
git commit -m "B_Monsters.cpp TLE solution"
git pull --rebase origin master
git push origin master

*/