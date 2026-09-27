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
        ll n,m;
        cin>>n>>m;

        vector<vector<int>> mn(n,vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ele;
                cin>>ele;
                mn[i][j]=ele;
            }
        }

        ll mini=LLONG_MAX;
        ll count=0;
        ll count0=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                /*if(mn[i][j]<0){
                    count++;
                    //mini=min(mini,mn[i][j]);
                    mini=max(mini,(ll)abs(mn[i][j]));
                }*/

                if(mn[i][j]==0){
                    count0++;
                }



                

if(mn[i][j]<0){
count++;

}mini=min(mini,(ll)abs(mn[i][j]));
            }


        }//so we got the count and also the mini negetive 

        
        ll sum=0;
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    sum+=abs(mn[i][j]);
                }
            }
        if(count%2==0 || count0>0){
            cout<<sum<<endl;
        }
        else{
            ll ans=sum-2*mini;
            cout<<ans<<endl;
        }

    }
    
    return 0;
}


/*

Move-Item ".\A_Numbers_Box.cpp" ".\1000\A_Numbers_Box.cpp"
git add "1000/A_Numbers_Box.cpp"
git commit -m "A_Numbers_Box.cpp"
git pull --rebase origin master
git push origin master

*/