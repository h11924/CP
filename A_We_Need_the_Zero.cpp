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
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        

        int n;
        cin >> n;

        int a;
        int zor=0;
        for(int i=0; i<n; i++) {
            cin >> a;
            zor=zor^a;
        }

        //n is here 
        //a is here 

        if(n%2==0){
            //if even and the elements are giving out zor as 0,tahna nything works 
            

            if(zor==0){
                cout << 0 << endl;
            }else{//if zor is not 0 then we can not make it 0
                cout<<-1<<endl;
            }
        }else {
             

            cout<<zor<<endl;

        }
    }
    
    return 0;
}

