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

        

        ll count1=0;
        ll count0=0;

        for(int i=0;i<n;i++){
            int a ;
            cin>>a;
            

            if(a==1){
                count1++;
            }else if(a==0){
                count0++;
            }
        }

        /*if(count1==1 && count0==0) cout<<1<<endl;
            
        else if(count1==0 && count0==0)  cout<<0<<endl;
           
        else {
            int ans=count1+count0+1;
            cout<<ans<<endl;
        }*/

        ll ans=count1*(1LL<<count0);
        cout<<ans<<endl;

        
    }
    
    return 0;
}


/*

Move-Item ".\B_Luntik_and_Subsequences.cpp" ".\900\B_Luntik_and_Subsequences.cpp"
git add "900/B_Luntik_and_Subsequences.cpp"
git commit -m "B_Luntik_and_Subsequences.cpp"
git pull --rebase origin master
git push origin master

*/