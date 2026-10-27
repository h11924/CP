#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> freq(101, 0); // Stores count of each number (a[i] <= 100)
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    
    // Step 1: Put one instance of each distinct number in increasing order
    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 0) {
            cout << i << " ";
            freq[i]--; // Reduce count since we used one instance
        }
    }
    
    // Step 2: Append all remaining duplicates
    for (int i = 0; i <= 100; i++) {
        while (freq[i] > 0) {
            cout << i << " ";
            freq[i]--;
        }
    }
    
    cout << "\n";
}

int main() {
    // Fast I/O
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

Move-Item ".\A_Meximization.cpp" ".\800\A_Meximization.cpp"
git add "800/A_Meximization.cpp"
git commit -m "A_Meximization.cpp"
git pull --rebase origin master
git push origin master

*/