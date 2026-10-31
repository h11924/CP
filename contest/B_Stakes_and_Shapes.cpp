#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int n = x + y + z;
        char c;
        if (y >= z) c = 'R';
        else if (z >= x) c = 'S';
        else c = 'P';
        printf("%s\n", string(n, c).c_str());
    }
    return 0;
}


/*

Move-Item ".\B_Stakes_and_Shapes.cpp" ".\contest\B_Stakes_and_Shapes.cpp"
git add "contest/B_Stakes_and_Shapes.cpp"
git commit -m "B_Stakes_and_Shapes.cpp"
git pull --rebase origin master
git push origin master

*/