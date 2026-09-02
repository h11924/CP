#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int min_max_diff = INT_MAX;
        
        // This is a common mistake. The problem is not asking for this pairing.
        // What we want is the minimum of all possible maximum differences.
        // It turns out that the optimal strategy is to pair adjacent elements
        // in the sorted array, and the answer is the maximum of these differences.
        // Let's re-verify this with the examples.
        // Example 1: [1, 2] -> sorted [1, 2]. Pair (1,2). Diff 1. Max diff 1. Answer 1. Correct.
        // Example 2: [10, 1, 2, 9] -> sorted [1, 2, 9, 10]. Pair (1,2), (9,10). Diffs 1, 1. Max diff 1. Answer 1. Correct.
        // Example 3: [3, 8, 9, 3, 3, 2] -> sorted [2, 3, 3, 3, 8, 9]. Pair (2,3), (3,3), (8,9). Diffs 1, 0, 1. Max diff 1. Answer 1. Correct.
        // Example 4: [5, 5, 5, 5, 5, 5, 5, 5] -> sorted [5, ..., 5]. All diffs 0. Max diff 0. Answer 0. Correct.
        // Example 5: [-5, -1, 2, 6] -> sorted [-5, -1, 2, 6]. Pair (-5, -1), (2, 6). Diffs 4, 4. Max diff 4. Answer 4. Correct.
        
        // The logic is indeed simple: sort the array and find the maximum difference between
        // all adjacent pairs of the form (a[2*i], a[2*i+1])
        int max_diff = 0;
        for (int i = 0; i < n; i += 2) {
            max_diff = max(max_diff, a[i+1] - a[i]);
        }
        
        // This logic is wrong. I must have misread the examples. Let me re-read them carefully.
        // Wait, the notes for Example 3 say: "We can choose pairs: (2,3), (3,3), (8,9). The differences are: 1,0,1 — the largest is 1."
        // This confirms that for this pairing, the max difference is 1. The output for this case is 1.
        // So the logic is to sort and pair adjacent elements, and the answer is the maximum of the differences of these pairs.
        
        // Let's use this logic.
        int result = 0;
        for (int i = 0; i < n; i += 2) {
            result = max(result, a[i+1] - a[i]);
        }
        cout << result << endl;
    }
};

int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        Solution sol;
        sol.solve();
    }
    return 0;
}