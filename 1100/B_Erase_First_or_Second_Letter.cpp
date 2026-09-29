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

        map<char,int> mp;

        int ans=0;

        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                //it doent exhist
                ans+=n-i;
                mp[s[i]]++;
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Erase_First_or_Second_Letter.cpp" ".\1100\B_Erase_First_or_Second_Letter.cpp"
git add "1100/B_Erase_First_or_Second_Letter.cpp"
git commit -m "B_Erase_First_or_Second_Letter.cpp"
git pull --rebase origin master
git push origin master

*/