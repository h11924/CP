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
        int n;
        cin >> n;

        vector<int>aa(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            aa[i]=a;
        }


        for(int i=0;i<n-1;i++){

            if(aa[i]==1){
                aa[i]++;
            }

            if(aa[i+1]%aa[i]==0){//whenever they are divisible we just make them non divisible by adding a number 
                aa[i+1]++;
            }

            
        }

        for(int i=0;i<n;i++){
            cout<<aa[i]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}


/*

 Move-Item ".\B_Not_Dividing.cpp" ".\900/B_Not_Dividing.cpp"
git add "900/B_Not_Dividing.cpp"
git commit -m "B_Not_Dividing.cpp"
git push origin master
*/

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
int n;
cin >> n;

vector<int>aa(n);

for(int i=0;i<n;i++){
cin>>aa[i];

// 1 divides every number, so change every 1 to 2 first.
if(aa[i]==1){
aa[i]++;
}
}

for(int i=0;i<n-1;i++){

// If aa[i+1] is divisible by aa[i],
// increase aa[i+1] by 1 to make it non-divisible.
if(aa[i+1]%aa[i]==0){
aa[i+1]++;
}
}

for(int i=0;i<n;i++){
cout<<aa[i]<<" ";
}
cout<<endl;
}

return 0;
}