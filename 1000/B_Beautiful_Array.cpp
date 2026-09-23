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
        long long n,k,b,s;
        cin>>n>>k>>b>>s;

         ll mini=k*b;
        ll maxi=k*b+(k-1)*n;

         

         if(s>maxi || s<mini) cout<<-1<<endl;

         else{
            vector<long long > ans(n,0);
            ans[0]=mini;

            s=s-mini;
            for(int i=0;i<n;i++){
                ll x=min(k-1,s);
                ans[i]+=x;
                s-=x;
            }

            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
         }
    }
    
    return 0;
}


/*

Move-Item ".\B_Beautiful_Array.cpp" ".\1000\B_Beautiful_Array.cpp"
git add "1000/B_Beautiful_Array.cpp"
git commit -m "B_Beautiful_Array.cpp"
git pull --rebase origin master
git push origin master

*/