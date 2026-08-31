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

        string s;
        cin>>s;

        int start=0;
        int end=n-1;

        int ans=n;

        while(start<end){

            if(s[start]!=s[end]){
                ans=ans-2;
            }
            else {
                break;
            }

            start++;
            end--;

            
        }

        cout<<ans<<endl;

    }
    
    return 0;
}


/*cd /d D:\CP
git pull origin master --rebase
git add 800/A_New_Problem.cpp
git commit -m "A_New_Problem.cpp"
git push origin master*/