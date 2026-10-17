#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for (auto &x : a) scanf("%d", &x);
        int v = a[n - 1];
        int covered = 0;
        int pos = n - 1;
        while (pos >= 0 && a[pos] == v) {
            covered++;
            pos--;
        }
        int cnt = 0;
        while (pos >= 0) {
            cnt++;
            covered *= 2;
            pos = n - 1 - covered;
            while (pos >= 0 && a[pos] == v) {
                covered++;
                pos--;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}

/*

Move-Item ".\B_Fun_with_Even_Subarrays.cpp" ".\1100\B_Fun_with_Even_Subarrays.cpp"
git add "1100/B_Fun_with_Even_Subarrays.cpp"
git commit -m "B_Fun_with_Even_Subarrays.cpp"
git pull --rebase origin master
git push origin master

*/