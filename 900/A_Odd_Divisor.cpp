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


int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n;
        cin>>n;

        bool flag=false;

        /*while(n!=0){
            n=n/2;
            if(n%2==1) {
                flag=true;
                break;
            }
        }*/

        while(n % 2 == 0) {
            n = n / 2;
        }

        if(n > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        
    }
    
    return 0;
}


/*

Move-Item ".\A_Odd_Divisor.cpp" ".\900\A_Odd_Divisor.cpp"
git add "900/A_Odd_Divisor.cpp"
git commit -m "A_Odd_Divisor.cpp"
git pull --rebase origin master
git push origin master

*/