#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int i = 0; // Left pointer
    int j = 0; // Right pointer
    int white_count = 0;
    int min_recolors = INT_MAX;

    while (j < n) {
        // Expand the window: include s[j]
        if (s[j] == 'W') {
            white_count++;
        }

        // When window size reaches k
        if (j - i + 1 == k) {
            min_recolors = min(min_recolors, white_count);

            // Shrink the window: remove s[i] before sliding
            if (s[i] == 'W') {
                white_count--;
            }
            i++; // Move left pointer forward
        }

        j++; // Move right pointer forward
    }

    cout << min_recolors << "\n";
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


/*

Move-Item ".\D_Black_and_White_Stripe.cpp" ".\1000\D_Black_and_White_Stripe.cpp"
git add "1000/D_Black_and_White_Stripe.cpp"
git commit -m "D_Black_and_White_Stripe.cpp"
git pull --rebase origin master
git push origin master

*/