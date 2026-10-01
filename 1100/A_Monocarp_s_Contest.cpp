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
        ll n;
        cin>>n;

        ll zero=0;
        ll one=0;

        vector<int>aa(n);

        for(int i=0;i<n;i++){
            ll a;
            cin>>a;

            aa[i]=a;


            if(a==0){
                zero++;
            }
            else{
                one++;
            }
        }

        if(aa[0]==1 && aa[n-1]==1){
            if(zero>=2){
                cout<<2<<endl;
            }else {
                cout<<-1<<endl;
            }
        }
        else if((aa[0]==0 && aa[n-1]==1) || (aa[0]==1 && aa[n-1]==0)){
            if(zero>=2){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            //both are zero
            cout<<0<<endl;
        }

        
    }
    
    return 0;
}


/*

Move-Item ".\A_Monocarp_s_Contest.cpp" ".\1100\A_Monocarp_s_Contest.cpp"
git add "1100/A_Monocarp_s_Contest.cpp"
git commit -m "A_Monocarp_s_Contest.cpp"
git pull --rebase origin master
git push origin master

*/