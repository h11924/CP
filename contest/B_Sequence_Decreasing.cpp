#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long mn = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            mn = min(mn, x);
        }

        cout << (mn <= n - 1 ? n : 0) << "\n";
    }

    return 0;
}


/**
 * Move-Item ".\B_Sequence_Decreasing.cpp" ".\contest\B_Sequence_Decreasing.cpp"
git add "contest/B_Sequence_Decreasing.cpp"
git commit -m "B_Sequence_Decreasing.cpp"
git pull --rebase origin master
git push origin master
 */