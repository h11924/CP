#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int x = INT_MAX, y = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(i % 2 == 0) x = min(x, a[i]);
            else y = max(y, a[i]);
        }
        if(n % 2 == 0 && x - y >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

/*

Move-Item ".\A_Threshold_Movement.cpp" ".\1100\A_Threshold_Movement.cpp"
git add "1100/A_Threshold_Movement.cpp"
git commit -m "A_Threshold_Movement.cpp"
git pull --rebase origin master
git push origin master

*/