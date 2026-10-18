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

        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll gcdeven=0;
        ll gcdodd=0;

        for(ll i=0;i<n;i++){
            if(i%2==0){
                gcdeven=__gcd(gcdeven,a[i]);
            }
            else{
                gcdodd=__gcd(gcdodd,a[i]);
            }
        }

        ll ans=0;
        ll noteven=false;
        ll notodd=false;

        for(ll i=0;i<n;i++){
            if(i%2==1 && noteven==false){
                if(a[i]%gcdeven==0){
                    noteven=true;
                    //we checked the othere elements and we are checking that others are not in gcd of this 
                    //so answer is gcdodd
                }

            }else if(i%2==0 && notodd==false){
                if(a[i]%gcdodd==0){
                    notodd=true;
                    //so checkd for elements we even
                }

            }
        }

        if(noteven==false  && notodd==true){
            cout<<gcdeven<<endl;
        }else if(notodd==false && noteven==true){
            cout<<gcdodd<<endl;
        }else if(noteven==true && notodd==true){
            cout<<0<<endl;
        }else{
            cout<<gcdeven<<endl;
        }
    }
    
    return 0;
}


/*

Move-Item ".\C_Paint_the_Array.cpp" ".\1100\C_Paint_the_Array.cpp"
git add "1100/C_Paint_the_Array.cpp"
git commit -m "C_Paint_the_Array.cpp"
git pull --rebase origin master
git push origin master

*/