#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int C = 1;
        while (true) {
            long long f = 0;
            for (int s = 1; s <= C; s++) f += (long long)s * (C / s);
            if (f >= n) break;
            C++;
        }
        vector<int> a;
        a.reserve(n);
        int r = n, id = 0;
        for (int s = C; s >= 1; s--) {
            int c = (s == 1) ? r : min(C / s, r / s);
            r -= c * s;
            for (int k = 0; k < c; k++) {
                id++;
                for (int j = 0; j < s; j++) a.push_back(id);
            }
        }
        cout << C << "\n";
        for (int i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
    }
    return 0;
}