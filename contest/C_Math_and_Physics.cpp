#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        long long s = 0;
        int mx = 0;
        bool inner = false;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            s += a[i];
            mx = max(mx, a[i]);
            if (i > 0 && i < n - 1 && a[i] >= 2) inner = true;
        }
        if (mx < 2) {
            printf("-1\n");
        } else if (n == 2 || inner) {
            printf("%lld\n", s - 1);
        } else {
            printf("%lld\n", s - (n - 1));
        }
    }
    return 0;
}

/*
Move-Item ".\C_Math_and_Physics.cpp" ".\contest\C_Math_and_Physics.cpp"
git add "contest/C_Math_and_Physics.cpp"
git commit -m "C_Math_and_Physics.cpp"
git pull --rebase origin master
git push origin master*/