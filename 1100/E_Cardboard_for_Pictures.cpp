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

ll solve(ll w,vector<ll>&a){
        ll sum=0;
        for(int i=0;i<a.size();i++){
            ll x=a[i]+2*w;

            if (x > 3000000000LL) {
            return LLONG_MAX;
        }

        sum+=x*x;

        if (sum > 4000000000000000000LL) {
            return LLONG_MAX;
        }
        }

        return sum;
    }

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;

    
    
    while (t--) {
       

        ll n,c;
        cin>>n>>c;

        vector<ll>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll low=1;
        ll high=1000000000LL;
        ll ans = 1;

        while(low<=high){
            ll mid=low+(high-low)/2;

            ll sum=solve(mid,a);

            if(sum==c){
                ans=mid;
                break;
            }
            if (sum > c) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }


        }
        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\E_Cardboard_for_Pictures.cpp" ".\1100\E_Cardboard_for_Pictures.cpp"
git add "1100\E_Cardboard_for_Pictures.cpp"
git commit -m "E_Cardboard_for_Pictures.cpp"
git pull --rebase origin master
git push origin master

*/