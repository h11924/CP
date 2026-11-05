#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        // Read the grid
        vector<vector<long long>> grid(n, vector<long long>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        
        long long total = 0;
        
        // Process each column independently
        for (int j = 0; j < m; j++) {
            vector<long long> col(n);
            for (int i = 0; i < n; i++) {
                col[i] = grid[i][j];
            }
            
            sort(col.begin(), col.end());
            
            // Sum of pairwise absolute differences in sorted array
            // For sorted s[0..n-1]:
            // Each s[i] appears as positive i times and negative (n-1-i) times
            long long colSum = 0;
            for (int i = 0; i < n; i++) {
                colSum += col[i] * (2LL * i - n + 1);
            }
            
            total += colSum;
        }
        
        cout << total << "\n";
    }
    
    return 0;
}

/*
Move-Item ".\B_Playing_in_a_Casino.cpp" ".\1200\B_Playing_in_a_Casino.cpp"
git add "1200/B_Playing_in_a_Casino.cpp"
git commit -m "B_Playing_in_a_Casino.cpp"
git pull --rebase origin master
git push origin master*/