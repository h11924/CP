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



int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        if(n<= 10) cout<<n<<endl;
        if(n>10 && n<100){ cout << 10+(n/10) <<endl;}
        if(n>=100 && n<1000){ cout << 10+10+(n/100)<<endl;}
        if(n>=1000 && n<10000){ cout << 10+10+10+(n/1000)<<endl;}
        if(n>=10000 && n<100000){ cout << 10+10+10+10+(n/10000)<<endl;}         
        if(n>=100000 && n<1000000){ cout << 10+10+10+10+10+(n/100000)<<endl;}
        if(n>=1000000 && n<10000000){ cout << 10+10+10+10+10+10+(n/1000000)<<endl;}
        if(n>=10000000 && n<100000000){ cout << 10+10+10+10+10+10+10+(n/10000000)<<endl;}
        if(n>=100000000 && n<1000000000){ cout << 10+10+10+10+10+10+10+10+(n/100000000)<<endl;}
        if(n>=1000000000){ cout << 10+10+10+10+10+10+10+10+(n/1000000000)<<endl;}   


    }
    
    return 0;
}
// 1,2,3...10 -10 two digit -10+(n/10) three digit -10+10+(n/100) four digit -10+10+10+(n/1000) five digit -10+10+10+10+(n/10000) six digit -10+10+10+10+10+(n/100000) seven digit -10+10+10+10+10+10+(n/1000000) eight digit -10+10+10+10+10+10+10+(n/10000000) nine digit -  10+10+10+10+10+10+10+10+(n/100000000) ten digit -  10+10+10+10+10+10+10+10+(n/1000000000)
//20,30,40,50...100 3 digit  10+10-1
//100,200...1000 10+10+10-1
//1000...9000,10000

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

int main() {
fast_io();

int t;
cin >> t;

while(t--){
int n;
cin >> n;

int d=0,x=n;

while(x>0){
d++;
x/=10;
}

int p=1;
for(int i=1;i<d;i++) p*=10;

int ans=9*(d-1)+n/p;

cout << ans << endl;
}

return 0;
}
