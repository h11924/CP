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
        

        string s;
        cin>>s;

        int count1=0;
        int count0=0;

        int maxi=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0') count0++;
            else if(s[i]=='1') count1++;
        }

        maxi=min(count0,count1);
        if(maxi%2!=0 ) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_01_Game.cpp" ".\900\B_01_Game.cpp"
git add "900/B_01_Game.cpp"
git commit -m "B_01_Game.cpp"
git pull --rebase origin master
git push origin master

*/