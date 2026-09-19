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
        int n;
        cin<<n;

        vector<int> a(n),b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<int> x(2*n+1,0);
    vector<int> y(2*n+1,0);

        


    }
    
    return 0;
}
*/

/*

Move-Item ".\B_Array_Merging.cpp" ".\1000\B_Array_Merging.cpp"
git add "1000/B_Array_Merging.cpp"
git commit -m "B_Array_Merging.cpp"
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

void solve() {
    int n;
    cin>>n;

    vector<int> a(n),b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<int> x(2*n+1,0);
    vector<int> y(2*n+1,0);

    int count=1;

    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            count++;
        }
        else{
            x[a[i-1]]=max(x[a[i-1]],count);
            count=1;
        }
    }

    x[a[n-1]]=max(x[a[n-1]],count);

    count=1;

    for(int i=1;i<n;i++){
        if(b[i]==b[i-1]){
            count++;
        }
        else{
            y[b[i-1]]=max(y[b[i-1]],count);
            count=1;
        }
    }

    y[b[n-1]]=max(y[b[n-1]],count);

    int maxi=0;

    for(int i=1;i<=2*n;i++){
        maxi=max(maxi,x[i]+y[i]);
    }

    cout<<maxi<<endl;
}

int main() {
    fast_io();

    int t=1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
 