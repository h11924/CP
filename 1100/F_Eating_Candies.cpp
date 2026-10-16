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

        vector<ll>w(n);

        for(ll i =0;i<n;i++){
            cin>>w[i];

        }

        ll right=n-1;
        ll left=0;

        pair<ll,ll>last;

        ll a=0;
        ll b=0;

        ll ans=0;

        while(left<=right){
            if(a<=b){
                a+=w[left];
                left++;
            }else{
                b+=w[right];
                right--;
            }
            
            if(a==b){
                ans=left+(n-1-right);
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\F_Eating_Candies.cpp" ".\1100\F_Eating_Candies.cpp"
git add "1100/F_Eating_Candies.cpp"
git commit -m "F_Eating_Candies.cpp"
git pull --rebase origin master
git push origin master

*/