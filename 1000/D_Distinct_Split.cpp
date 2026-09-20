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
        cin >> n;

        string s;
        cin >> s;

        vector<int> prefix(n);
        vector<int> suffix(n);

        set<char> st;

        for(int i = 0; i < n; i++) {
            st.insert(s[i]);
            prefix[i] = st.size();
        }

        st.clear();

        for(int i = n - 1; i >= 0; i--) {
            st.insert(s[i]);
            suffix[i] = st.size();
        }

        int ans = 0;

        for(int i = 0; i < n - 1; i++) {
            ans = max(ans, prefix[i] + suffix[i + 1]);
        }

        cout << ans << endl;
    }

    return 0;
}


Move-Item ".\D_Distinct_Split.cpp" ".\1000\D_Distinct_Split.cpp"
git add "1000/D_Distinct_Split.cpp"
git commit -m "D_Distinct_Split.cpp"
git pull --rebase origin master
git push origin master