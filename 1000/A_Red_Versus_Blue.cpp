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
        ll n,r,b;
        cin>>n>>r>>b;

        ll gaps=b+1;
        ll rineach=r/(b+1);
        ll rr=rineach;
        ll leftover_r=(r%(b+1));

        ll rcount=r;
        ll bcount=b;

        string s="";

        while(rcount>0 ){
            for(int i=0;i<rineach;i++){
                s+='R';
                rcount--;
            }if(leftover_r!=0){
                s+='R';
                leftover_r--;
                rcount--;
            }
            if(bcount>0){
s+='B';
            
            bcount--;
            }
            

        }

        for(int i=0;i<n;i++){
            cout<<s[i];
        }

        cout<<endl;


    }
    
    return 0;
}


/*

Move-Item ".\A_Red_Versus_Blue.cpp" ".\1000\A_Red_Versus_Blue.cpp"
git add "1000/A_Red_Versus_Blue.cpp"
git commit -m "A_Red_Versus_Blue.cpp"
git pull --rebase origin master
git push origin master

*/