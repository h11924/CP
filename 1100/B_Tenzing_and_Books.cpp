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

bool solve(vector<ll>&a ,vector<ll>&b,vector<ll>&c,ll x,ll n) {
    ll cur=0;
    /*for(int i=0;i<n;i++){
        if(cur==x) return true;
        cur=cur|a[i];

        if(cur>x) break;
    }
    for(int i=0;i<n;i++){
        if(cur==x) return true;
        cur=cur|b[i];

        if(cur>x) break;
    }
    for(int i=0;i<n;i++){
        if(cur==x) return true;
        cur=cur|c[i];

        if(cur>x) break;
    }*/
    for(int i = 0; i < n; i++) {
        if((a[i] | x) != x) break;
        cur = cur | a[i];
    }

    for(int i = 0; i < n; i++) {
        if((b[i] | x) != x) break;
        cur = cur | b[i];
    }

    for(int i = 0; i < n; i++) {
        if((c[i] | x) != x) break;
        cur = cur | c[i];
    }
    //so if we got our answer we have returbed true otherwise we have to return false
    return cur==x;
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n,x;
        cin>>n>>x;

        vector<ll>a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }

        if(solve(a,b,c,x,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}


/*

Move-Item ".\B_Tenzing_and_Books.cpp" ".\1100\B_Tenzing_and_Books.cpp"
git add "1100/B_Tenzing_and_Books.cpp"
git commit -m "B_Tenzing_and_Books.cpp"
git pull --rebase origin master
git push origin master

*/