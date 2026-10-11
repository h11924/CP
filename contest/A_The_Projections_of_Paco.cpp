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
        long long p = 0;
        for (int i = 1; i <= n; i++) {
            long long a;
            cin >> a;
            if (i % 2 == 1) p += a;
            else p -= a;
        }
        cout << p << "\n";
    }
    return 0;
}

/*

Move-Item ".\A_The_Projections_of_Paco.cpp" ".\contest\A_The_Projections_of_Paco.cpp"
git add "contest/A_The_Projections_of_Paco.cpp"
git commit -m "A_The_Prohections_of_Paco.cpp"
git pull --rebase origin master
git push origin master

*/