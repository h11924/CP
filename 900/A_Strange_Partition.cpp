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
        int n;
        cin>>n;

        ll x;
        cin>>x;

        ll maxi=0;
        ll mini=0;

        vector<int>aa(n);

        for(int i=0;i<n;i++){
            int a;
            cin>>a;

            aa[i]=a;


        }

        for(int i=0;i<n;i++){
            mini += aa[i];
            maxi += (aa[i] + x - 1) / x;
        }
        //mini=ceil(mini/x);
        mini = (mini + x - 1) / x;

        cout<<mini<<" "<<maxi<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_Strange_Partition.cpp" ".\900\A_Strange_Partition.cpp"
git add "900/A_Strange_Partition.cpp"
git commit -m "A_Strange_Partition.cpp"
git pull --rebase origin master
git push origin master

*/