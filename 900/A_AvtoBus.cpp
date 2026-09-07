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
        ll n;
        cin >> n;

        if(n%2==1 || n<4){
            cout<<-1<<endl;
            continue;
        }

        //cout<<ceil((double)n/6)<<" "<<floor((double)n/4)<<endl;
        ll mn=(n+5)/6;
ll mx=n/4;
        cout<<mn<<" "<<mx<<endl;
    }
    
    return 0;
}


/*

 Move-Item ".A.AutoBus.cpp" ".\900\A_AutoBus.cpp"
git add "900/A_AutoBus.cpp"
git commit -m "A_AutoBus.cpp"
git push origin master
*/