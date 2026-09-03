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
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(n%2==0){
            //even 
            cout<<2<<"\n";
            cout<<1<<" "<<n<<"\n";
            cout<<1<<" "<<n<<"\n";

        }else {
            
            //odd
            cout<<4<<"\n";
            cout<<1<<" "<<n-1<<"\n";
            cout<<1<<" "<<n-1<<"\n";
            cout<<n-1<<" "<<n<<"\n";
            cout<<n-1<<" "<<n<<"\n";
        }
    }
    
    return 0;
}


/*

 Move-Item ".\A_Make_It_Zero.cpp" ".\900\A_Make_It_Zero.cpp"
git add "900/A_Make_It_Zero.cpp"
git commit -m "A_Make_It_Zero.cpp"
git push origin master
*/