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
    
    
    
    ll n,k;
    cin>>n>>k;

    vector<ll>divisors;

    for(int i=1;i<=n/i;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }

    sort(divisors.begin(),divisors.end());

    if(k>divisors.size()){
        cout<<-1<<endl;
    }else{
        cout<<divisors[k-1]<<endl;
    }

    //so lets find all dividors

    
    return 0;
}


/*

Move-Item ".\A_k_th_divisor.cpp" ".\1400\A_k_th_divisor.cpp"
git add "1400/A_k_th_divisor.cpp"
git commit -m "A_k_th_divisor.cpp"
git pull --rebase origin master
git push origin master

*/