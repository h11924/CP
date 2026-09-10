#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();

    int t = 1;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        int two = 0;
        int three = 0;

        while(n % 2 == 0) {
            two++;
            n /= 2;
        }

        while(n % 3 == 0) {
            three++;
            n /= 3;
        }

        if(n != 1 || two > three) {
            cout << -1 << endl;
        }
        else {
            cout << three + (three - two) << endl;
        }
    }

    return 0;
}

B_Multiply_by_2_divide_by_6.cpp