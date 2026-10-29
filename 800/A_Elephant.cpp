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
    
    ll x;
    cin>>x;

    //how many other than 5 required
    ll a=x;
    a=a%5;
    //so a is the extra steps 

    x=x-a;
    //so x/5 is the 5 steps 

    ll b=x/5;
    ll ans=0;
    if(a==0) ans=b;
    else ans=b+1;
    

    cout<<ans<<endl;

    
    return 0;
}


/*

Move-Item ".\A_Elephant.cpp" ".\800\A_Elephant.cpp"
git add "800/A_Elephant.cpp"
git commit -m "A_Elephant.cpp"
git pull --rebase origin master
git push origin master

*/