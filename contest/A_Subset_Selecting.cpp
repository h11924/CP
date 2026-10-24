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

void solve() {
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n,k;
        cin>>n>>k;

        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        //we know that lets make a array index thing here
        //sort all elememnst
        ll ele=0;
        bool found=false;
        for(ll i=0;i<n;i++){
            if(a[i]!=i) {
                ele==a[i];
                found=true;
            }
        }

        if(found==false){
            ele==n+1;
        }

        //so now we know the overall mex of the array 
        //we know that if n is even it is ele
        ll ans=0;
        if(n%2==0){
            ans=ele;
        }else{
            //if it is odd it becomes complicated as 
            //and we dont have any missing number like
            ans=n+1;
        }


        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_Subset_Selecting.cpp" ".\contest\A_Subset_Selecting.cpp"
git add "contest/A_Subset_Selecting.cpp"
git commit -m "A_Subset_Selecting.cpp"
git pull --rebase origin master
git push origin master

*/


#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> cnt(n + 2, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int ans = 0;
        int prefix = 0;
        for (int v = 0; v <= n; v++) {
            prefix += cnt[v];
            if (cnt[v] >= 1 && prefix >= k * (v + 1)) {
                ans = v + 1;
            } else {
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}