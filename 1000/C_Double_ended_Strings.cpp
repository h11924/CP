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
        string a;
        cin>>a;
        string b;
        cin>>b;

        int n=a.size(),m=b.size();
vector<vector<int>> dp(n+1,vector<int>(m+1,0));

int mx=0;

for(int i=1;i<=n;i++) {
for(int j=1;j<=m;j++) {
if(a[i-1]==b[j-1]) {
dp[i][j]=dp[i-1][j-1]+1;
mx=max(mx,dp[i][j]);
}
}
}

cout << n+m-2*mx << '\n';


    }
    
    return 0;
}


/*

Move-Item ".\C_Double_ended_Strings.cpp" ".\1000\C_Double_ended_Strings.cpp"
git add "1000/C_Double_ended_Strings.cpp"
git commit -m "C_Double_ended_Strings.cpp"
git pull --rebase origin master
git push origin master

*/