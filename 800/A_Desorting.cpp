

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int n, vector<int> &arr) {
      
        bool is_sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] < arr[i]) {
                is_sorted = false;
                break;
            }
        }
        if (!is_sorted) return 0;

        
        int mini = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            mini = min(mini, arr[i + 1] - arr[i]);
        }

        
        if (mini == 0) return 1;  
        return (mini / 2) + 1;    
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        Solution sol;
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        cout << sol.solve(n, arr) << endl;
    }
    return 0;
}
