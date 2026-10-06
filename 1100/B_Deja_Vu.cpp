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

void solve() {
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n,q;
        cin>>n>>q;

        vector<ll>aa(n);
        for(int i=0;i<n;i++){
            cin>>aa[i];
        }

        //all a are sorted

        vector<ll>queries(q);
        for(int i=0;i<q;i++){
            cin>>queries[i];
        }
        //now travel in queries and for each query store it in qu and check what all are divisble and than in those add 

        //travel in queries
        for(int i=0;i<queries.size();i++){
            ll number=queries[i];
            for(int j=0;j<aa.size();j++){
                /*if(aa[j]%pow(2,number)==0){
                    aa[j]+=pow(2,number-1);
                if(aa[j] % (1LL << number) == 0){
                    aa[j] += (1LL << (number-1));
                }
            }
        }

        //now print the final array 
        for(ll i=0;i<aa.size();i++){
            cout<<aa[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Deja_Vu.cpp" ".\1100\B_Deja_Vu.cpp"
git add "1100/B_Deja_Vu.cpp"
git commit -m "B_Deja_Vu.cpp"
git pull --rebase origin master
git push origin master

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while(t--){
int n,q;
cin >> n >> q;

vector<ll>a(n);
for(int i=0;i<n;i++){
cin >> a[i];
}

vector<ll>x(q);
for(int i=0;i<q;i++){
cin >> x[i];
}

ll prev=31;

for(int i=0;i<q;i++){
if(x[i]>=prev) continue;

ll val=pow(2,x[i]);

for(int j=0;j<n;j++){
if(a[j]%val==0){
a[j]+=val/2;
}
}

prev=x[i];
}

for(int i=0;i<n;i++){
cout << a[i] << " ";
}

cout << endl;
}

return 0;
}