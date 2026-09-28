#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    ll a,b;
        cin>>a>>b;
        ll div=0;

        if(a==b) {
            cout<<0<<endl;
            return;
        }
        


    if (a > b) {
        if (a % b != 0) {
            cout << -1 << endl;               // Cannot divide a to get b
            return;
        }

        div = a / b;                           // Ratio by which we need to divide
    }
    else {
        if (b % a != 0) {
            cout << -1 << endl;               // Cannot multiply a to get b
            return;
        }

        div = b / a;                           // Ratio by which we need to multiply
    }

    ll cnt = 0;

    while (div % 2 == 0) {
        div /= 2;                              // Remove one factor of 2
        cnt++;                                 // Count how many factors of 2 we have
    }

    while (div % 2 == 0) {
        div /= 2;                              // Remove one factor of 2
        cnt++;                                 // Count how many factors of 2 we have
    }

    if (div != 1) {
        cout << -1 << endl;                    // Ratio is not a power of 2
        return;
    }

    cout << (cnt + 2) / 3 << endl;         
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
        

        
    
    }return 0;
}

//the number of multiplicatiosn we nned to make a to be is eqaul to the divisions we need to make b to a 



/*

Move-Item ".\B_Jonny_and_Ancient_Computer.cpp" ".\1000\B_Jonny_and_Ancient_Computer.cpp"
git add "1000/B_Jonny_and_Ancient_Computer.cpp"
git commit -m "B_Jonny_and_Ancient_Computer.cpp"
git pull --rebase origin master
git push origin master

*/