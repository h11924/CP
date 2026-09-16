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
        

        string s;
        cin>>s;

        int count0=0;
        int count1=0;

        int ans=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0') count0++;
            else count1++;
        }
        int ele1=s.size();

        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(count1>0) {
                    count1--;

                }
                else if(count1==0) {
                    ele1=i;
                    break;
                }
            }
            /*else{
                if(count0>0) count0--;
                else if(count0==0) ele1=i+1;
            }*/
            else {
                if (count0 > 0) count0--;
                else if (count0 == 0) {
                    ele1 = i; // Store index where we ran out
                    break;   // FIXED: Stop loop immediately
                }
            }
        }

        ans=s.size()-ele1;
        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Swap_and_Delete.cpp" ".\900\B_Swap_and_Delete.cpp"
git add "900/B_Swap_and_Delete.cpp"
git commit -m "B_Swap_and_Delete.cpp"
git pull --rebase origin master
git push origin master

*/