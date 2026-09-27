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
        ll a,b;
        cin>>a>>b;

        if(a==b) cout<<2<<endl;
        else if(a<b) cout<<1<<endl;

        else{
            /*ll count=0;
            for(int i=1;i<=30;i++){
                b++;
                count++;
                if(b>a) break;
            }

            ll ans=count+1;
            cout<<ans<<endl;*/
            ll ans=1e18;

for(int i=0;i<=30;i++){
ll x=a;
ll y=b+i;

if(y==1) continue;

ll cnt=i;

while(x>0){
x/=y;
cnt++;
}

ans=min(ans,cnt);
}

cout<<ans<<endl;

            //i is how many times we are incresing b 
            
        }
        } return 0;

    }
    
   



/*

Move-Item ".\A_Add_and_Divide.cpp" ".\1000\A_Add_and_Divide.cpp"
git add "1000/A_Add_and_Divide.cpp"
git commit -m "A_Add_and_Divide.cpp"
git pull --rebase origin master
git push origin master

*/