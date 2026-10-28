#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    // x is formed as 10^(a-1)
    long long x = pow(10, a - 1);

    // y is formed as 10^(b-1) + 10^(c-1)
    long long y = pow(10, b - 1) + pow(10, c - 1);

    cout << x << " " << y << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}