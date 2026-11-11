#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    
    int ans = 0;
    
    // We only need to iterate over the top-left quadrant of the grid
    for (int r = 0; r < n / 2; ++r) {
        for (int c = 0; c < (n + 1) / 2; ++c) {
            // The four symmetric positions under 0, 90, 180, and 270 degree rotations:
            int v1 = grid[r][c] - '0';
            int v2 = grid[c][n - 1 - r] - '0';
            int v3 = grid[n - 1 - r][n - 1 - c] - '0';
            int v4 = grid[n - 1 - c][r] - '0';
            
            int ones = v1 + v2 + v3 + v4;
            
            // Cost to make all 4 elements equal (either all 0 or all 1)
            ans += min(ones, 4 - ones);
        }
    }
    
    cout << ans << "\n";
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

Move-Item ".\E_Mirror_Grid.cpp" ".\1200\E_Mirror_Grid.cpp"
git add "1200/E_Mirror_Grid.cpp"
git commit -m "E_Mirror_Grid.cpp"
git pull --rebase origin master
git push origin master

*/