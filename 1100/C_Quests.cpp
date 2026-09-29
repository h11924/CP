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

        vector<ll> aa(n);
        vector<ll> bb(n);

        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            aa[i]=a;

           
        }

        for(int i=0;i<n;i++){
    

            ll b;
            cin>>b;
            bb[i]=b;
        }

        /*ll sum=0;

        for(int i=0;i<min(n,k);i++){
            sum+=aa[i];
            //all unlocked done 


        }
        //ll left=k-min(n,k);
        ll left=k-i-1;
        ll maxi=0;
        for(int i=0;i<min(n,k);i++){
            maxi=max(maxi,bb[i]*left);
        }

        ll ans=sum+maxi;

        cout<<ans<<endl;
        */
        
        ll sum=0;
        ll maxi=0;
        ll ans=0;

        for(int i=0;i<min(n,k);i++){
            sum+=aa[i];
            maxi=max(maxi,bb[i]);

            ll left=k-i-1;

            ll cur=sum+maxi*left;

            ans=max(ans,cur);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\C_Quests.cpp" ".\1100\C_Quests.cpp"
git add "1100/C_Quests.cpp"
git commit -m "AC_Quests.cpp"
git pull --rebase origin master
git push origin master

*/