#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(){

    }
};

int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;

        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            a[i]+=i+1;
        }

        sort(a.begin(),a.end());

        ll ans=0;
        for(ll i=0;i<n;i++){
            /*if(a[i]>=c){
                break;
            }else{
                ans++;
                c==a[i];

            }*/
             if(a[i]>c){
                break;
            }
            c-=a[i];
            ans++;
        }

        cout<<ans<<endl;
    }
}

/*
Move-Item ".\G_1_Teleporters_Easy_Version.cpp" ".\1100\G_1_Teleporters_Easy_Version.cpp"
git add "1100/G_1_Teleporters_Easy_Version.cpp"
git commit -m "G_1_Teleporters_Easy_Version.cpp"
git pull --rebase origin master
git push origin master
*/