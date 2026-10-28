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
        ll x;
        cin>>x;

        ll n;
        cin>>n;

        ll time=1;

        ll ans=x;

        while(n!=0){
            if(x%2==0){
                //even case
                x=x-time;
                
            }else {
                x=x+time;
            }
            time++;
            n--;
        }

        cout<<x<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_AvtoBus.cpp" ".\900\A_AvtoBus.cpp"
git add "900/A_AvtoBus.cpp"
git commit -m "A_AvtoBus.cpp"
git pull --rebase origin master
git push origin master

*/