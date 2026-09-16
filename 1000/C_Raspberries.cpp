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
        ll n,k;
        cin>>n>>k;

        vector<ll>aa(n);
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;

            aa[i]=a;
        }

    
        int even=0;
        int ans=INT_MAX;

        for(int i=0;i<aa.size();i++){
            if(aa[i]%2==0) even++;
            if(aa[i]==k) ans=0;

            //ans=min(ans,k-aa[i]%k);

            ans=min(ans,(int)((k-aa[i]%k)%k));
        }

        if(k==4){
            if(even>=2){
                ans=min(ans,0);
            }else if(even==1){
                ans=min(ans,1);
            }else if(even==0){
                ans=min(ans,2);
            }

        }cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\C_Raspberries.cpp" ".\900\C_Raspberries.cpp"
git add "900/C_Raspberries.cpp"
git commit -m "C_Raspberries.cpp"
git pull --rebase origin master
git push origin master

*/