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
    
    ll a,b;
    cin>>a>>b;

    ll cnt=0;

    while(a<=b){
        a=a*3;
        b=b*2;

        cnt++;
    }

    cout<<cnt<<endl;
    
    return 0;
}


/*

Move-Item ".\A_Bear_and_Big_Brother.cpp" ".\800\A_Bear_and_Big_Brother.cpp"
git add "800/A_Bear_and_Big_Brother.cpp"
git commit -m "A_Bear_and_Big_Brother.cpp"
git pull --rebase origin master
git push origin master

*/