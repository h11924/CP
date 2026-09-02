#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    void solve() {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        int first_a = -1, last_a = -1;
        int first_b = -1, last_b = -1;

        // Find the first and last occurrences of 'a' and 'b'
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'a') {
                if (first_a == -1) {
                    first_a = i;
                }
                last_a = i;
            } else {
                if (first_b == -1) {
                    first_b = i;
                }
                last_b = i;
            }
        }

        // Calculate the cost to group all 'a's
        int cost_a = 0;
        if (first_a != -1 && first_a != last_a) {
            for (int i = first_a + 1; i < last_a; ++i) {
                if (s[i] == 'b') {
                    cost_a++;
                }
            }
        }

        // Calculate the cost to group all 'b's
        int cost_b = 0;
        if (first_b != -1 && first_b != last_b) {
            for (int i = first_b + 1; i < last_b; ++i) {
                if (s[i] == 'a') {
                    cost_b++;
                }
            }
        }
        
        // Output the minimum of the two costs, handling cases with only one type of character
        if (first_a == -1 || first_b == -1) {
            std::cout << 0 << std::endl;
        } else {
            std::cout << std::min(cost_a, cost_b) << std::endl;
        }
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int t;
    std::cin >> t;
    while (t--) {
        Solution sol;
        sol.solve();
    }
    return 0;
}