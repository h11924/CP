/*#include <bits/stdc++.h>
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

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n;
        cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        //everything is in a now 
        //make a prefix sum now
        vector<ll>prefix(n);
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }

        //but now we want to check on all those k which are divisors of n
        //means n%k==0
        //lets put a loop and find all the numbers and store in array

        ll maxi=LLONG_MIN;
        ll mini=LLONG_MAX;

        
        for(int i=0;i<n;i++){
            if(i%n!=0) continue;
            //so we are skipping the elemenst which are not divisible by k
            //so if they are divisble 

            ll current=prefix[i]-prefix[i-k];
            maxi=max(maxi,current);
            mini=min(mini,current);
        }

        ll ans=maxi-mini;
        cout<<ans<<"\n";
        
    }
    
    return 0;
}


/*

Move-Item ".\B_250_Thousand_Tons_of_TNT.cpp" ".\1100\B_250_Thousand_Tons_of_TNT.cpp"
git add "1100/B_250_Thousand_Tons_of_TNT.cpp"
git commit -m "B_250_Thousand_Tons_of_TNT.cpp"
git pull --rebase origin master
git push origin master


*/

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

int main() {
    fast_io();

    int t = 1;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        vector<ll> prefix(n);
        prefix[0]=a[0];

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }

        ll ans=0;

        for(int k=1;k<=n;k++){
            if(n%k!=0) continue;

            ll maxi=LLONG_MIN;
            ll mini=LLONG_MAX;

            for(int i=0;i<n;i+=k){
                ll current;

                if(i==0)
                    current=prefix[i+k-1];
                else
                    current=prefix[i+k-1]-prefix[i-1];

                maxi=max(maxi,current);
                mini=min(mini,current);
            }

            ans=max(ans,maxi-mini);
        }

        cout << ans << "\n";
    }

    return 0;
}