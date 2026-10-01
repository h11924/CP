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

        char c;
        cin>>c;

        string s;
        cin>>s;

        ll count=0;

        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1] && s[i]!=c && s[n-i-1]!=c){
                count+=2;
            }
            else if(s[i]==c && s[n-i-1]!=c){
                count++;
            }
            else if(s[i]!=c && s[n-i-1]==c){
                count++;
            }

        }

        cout<<count<<"\n";
    }
    
    return 0;
}


/*

Move-Item ".\A_AvtoBus.cpp" ".\800\A_Turn_Into_a_Palindrome.cpp"
git add "800/A_Turn_Into_a_Palindrome.cpp"
git commit -m "A_Turn_Into_a_Palindrome.cpp"
git pull --rebase origin master
git push origin master

*/