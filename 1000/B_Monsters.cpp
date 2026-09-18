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
        int n,k;
        cin>>n>>k;

        vector<pair<int,int>>aa(n);

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            aa[i].first=a;
            aa[i].second=i+1;
        }

        for(int i=0;i<n;i++){
            /*if(aa[i].first!=k){
                aa[i].first=aa[i].first%k;
            }*/

            aa[i].first = aa[i].first % k;

            // A remainder of 0 should be treated as k.
            // Otherwise monsters with health exactly divisible by k
            // would incorrectly come before the others.
            if(aa[i].first == 0){
                aa[i].first = k;

        }
    }

        /*vector<int> ans;
        sort(aa.begin(),aa.end());
        reverse(aa.begin(),aa.end());*/

        sort(aa.begin(),aa.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.first != b.first){
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        for(int i=0;i<n;i++){
            cout<<aa[i].second<<" ";

        }

        cout<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Monsters.cpp" ".\1000\B_Monsters.cpp"
git add "1000/B_Monsters.cpp"
git commit -m "B_Monsters.cpp"
git pull --rebase origin master
git push origin master

*/