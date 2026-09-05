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
    
    int t ;
    cin >> t;
    
    while (t--) {


        int n;
        cin >> n;

        vector<int>aa(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            aa[i]=a;
        }

        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(aa[i],maxi);
            mini=min(aa[i],mini);

    }
        int ans=maxi-mini;
        cout<<ans<<endl;
    
    
}return 0;

}*/


/*

 Move-Item ".\C_Vasilije_in_Cacak.cpp" ".\900\C_Vasilije_in_Cacak.cpp"
git add "900/FILENAME.cpp"
git commit -m "FILENAME.cpp"
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

void solve() {
    
}

int main() {
    fast_io();
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<ll>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll ans=a[n-1]-a[0];

        // Keep a[0] fixed and bring any a[i] to the last position.
        // This gives a[i]-a[0].
        for(int i=1;i<n;i++){
            ans=max(ans,a[i]-a[0]);
        }

        // Keep a[n-1] fixed and bring any a[i] to the first position.
        // This gives a[n-1]-a[i].
        for(int i=0;i<n-1;i++){
            ans=max(ans,a[n-1]-a[i]);
        }

        // Rotate a subarray so that two adjacent elements
        // can effectively become the first and last elements.
        // This gives a[i]-a[i+1].
        for(int i=0;i<n-1;i++){
            ans=max(ans,a[i]-a[i+1]);
        }

        cout<<ans<<endl;
    }
    
    return 0;
}


/*

 Move-Item ".\A_Mainak_and_Array.cpp" ".\900/A_Mainak_and_Array.cpp"
git add "900/A_Mainak_and_Array.cpp"
git commit -m "A_Mainak_and_Array.cpp"
git push origin master
*/