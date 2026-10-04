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

        vector<ll>aa(n);
        for(int i=0;i<n;i++){
            cin>>aa[i];

        }

        ll maxi=aa[0];
        ll sum=aa[0];

        /*for(int i=1;i<n;i++){
            if(aa[i]%2==aa[i-1]%2){
                sum=aa[i];
            }else{
                sum+=aa[i];
                maxi=max(maxi,sum);
            }
        }*/

        for(int i=1;i<n;i++){
            if((aa[i]%2==0)==(aa[i-1]%2==0)){
                sum=aa[i];
            }else{
                sum=max(aa[i],sum+aa[i]);
            }
            maxi=max(maxi,sum);
        }

        cout<<maxi<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\C_Yarik_and_Array.cpp" ".\1100\C_Yarik_and_Array.cpp"
git add "1100\C_Yarik_and_Array.cpp"
git commit -m "C_Yarik_and_Array.cpp"
git pull --rebase origin master
git push origin master

*/