/*#include <bits/stdc++.h>
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

bool isprime(ll n){
if(n<2) return false;
for(ll i=2;i*i<=n;i++){
if(n%i==0) return false;
}
return true;
}

int main() {
    fast_io();
    
 
    
    ll n;
    cin>>n;

    ll cnt=0;

    for(ll i=1;i<=n;i++){
        //for every i check the prime factors
        map<int,int>prime;
        for(ll j=1;j<i;i++){
            if(isprime(j) && i%j==0){
                //we got a prime
                prime[j]++;
            }
        }
        if(prime.size()==2) cnt++;
    }

    cout<<cnt<<endl;
    
    return 0;
}


/*

Move-Item ".\A_Almost_Prime.cpp" ".\900\A_Almost_Prime.cpp"
git add "900/A_Almost_Prime.cpp"
git commit -m "A_Almost_Prime.cpp"
git pull --rebase origin master
git push origin master

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;

int cnt=0;

for(int i=2;i<=n;i++){
int x=i;
int d=0;

for(int j=2;j*j<=x;j++){
if(x%j==0){
d++;
while(x%j==0) x/=j;
}
}

if(x>1) d++;

if(d==2) cnt++;
}

cout<<cnt<<endl;
return 0;
}