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

        int n=s.size();
       
        
            if(s[0]!=s[n-1]){
                if(s[0]=='a'){
                    s[0]='b';
                }else{
                    s[0]='a';
                }

            }

            cout<<s<<endl;
        
    }
    
    return 0;
}


/*

Move-Item ".\A_AB_Balance.cpp" ".\900\A_AB_Balance.cpp"
git add "900/A_AB_Balance.cpp"
git commit -m "A_AB_Balance.cpp"
git pull --rebase origin master
git push origin master

*/