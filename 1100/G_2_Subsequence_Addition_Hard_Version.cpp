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
        ll n ;
        cin>>n;

        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<ll>prefix(n);

        prefix[0]=a[0];
        for(ll i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        bool done=false;

        if(a[0]!=1) {
            cout<<"NO"<<endl;
            done=true;
        }else{
            for(ll i=1;i<n;i++){
                if(prefix[i-1]<a[i]) {
                    cout<<"NO"<<endl;
                    done=true;
                    break;
                } 
            }
        }

        if(done==false){
            cout<<"YES"<<endl;
        }
    
    }
    
    return 0;
}


/*

Move-Item ".\G_2_Subsequence_Addition_Hard_Version.cpp" ".\1100\G_2_Subsequence_Addition_Hard_Version.cpp"
git add "1100/G_2_Subsequence_Addition_Hard_Version.cpp"
git commit -m "G_2_Subsequence_Addition_Hard_Version.cpp"
git pull --rebase origin master
git push origin master

*/