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
bool check(ll n){
        ll number=n;
        while(n>0){
            ll lastdigit=n%10;
            //if(number%lastdigit !=0 ) return false;
            if(lastdigit!=0 && number%lastdigit!=0) return false;
            n=n/10;
        }

        return true;
    }

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;

    
    
    while (t--) {
        ll n ;
        cin>>n;

        while(!check(n)){
            n++;
        }

        cout<<n<<endl;


    }
    
    return 0;
}


/*

Move-Item ".\B_Fair_Numbers.cpp" ".\1000\B_Fair_Numbers.cpp"
git add "1000/B_Fair_Numbers.cpp"
git commit -m "B_Fair_Numbers.cpp"
git pull --rebase origin master
git push origin master

*/