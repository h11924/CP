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
            int a;
            cin>>a;
            aa[i]=a;
        }

        int ans=0;

        for(int i=0;i<n;i++){
            /*if(aa[i]==0 && aa[i+1]!=0){
                ans++;
            }earler we were counting the 0 eleemnets but now we will count the 0s only properly
                */

            if(aa[i]!=0 && (i==0 || aa[i-1]==0)){
                ans++;
            }
        }

        /*if(ans!=0){
            cout<<ans<<endl;
        }
        else{
            cout<<1<<endl;
        }*/

        if(ans==0)
cout<<0<<endl;
else if(ans==1)
cout<<1<<endl;
else
cout<<2<<endl;

    }
    
    return 0;
}


/*

 Move-Item ".\B_NIT_Destroys_the_Universe.cpp" ".\900/B_NIT_Destroys_the_Universe.cpp"
git add "900/B_NIT_Destroys_the_Universe.cpp"
git commit -m "B_NIT_Destroys_the_Universe.cpp"
git push origin master
*/