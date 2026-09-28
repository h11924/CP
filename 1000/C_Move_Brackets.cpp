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
        cin>>n;

        string s;
        cin>>s;

        ll count=0;
        ll ans=0;
        //we are keeping a track of how many times our answer is going down as we want ( to come before every ) but it will go to negetive only if it not in the correct order

        for(char c : s){
            if(c=='(') count++;
            else count--;

            if(count<0){
                ans++;
                count = 0;
            }
        }

        cout<<ans<<endl;

    }
    
    return 0;
}


/*

Move-Item ".\C_Move_Brackets.cpp" ".\1000\C_Move_Brackets.cpp"
git add "1000/C_Move_Brackets.cpp"
git commit -m "C_Move_Brackets.cpp"
git pull --rebase origin master
git push origin master

*/