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

        string s;
        cin >> s;

        int count1=0;
        int count2=0;

        int maxi1=0;
        int maxi2=0;

        int ans=0;

        for(char c:s){
            if(c=='<'){
                count1++;
                maxi1=max(maxi1,count1);
                count2=0;
            }
            else{
                count2++;
                maxi2=max(maxi2,count2);
                count1=0;
            }
        }

        /*if(count1==count2) ans=count1+1;
        else if(count1==0) ans=count2;
        else if (count2==0) ans=count1;
        else ans=min(count1,count2)-1;*/

        ans=max(maxi1,maxi2)+1;

        cout<<ans<<endl;
    }
    
    return 0;
}


/*

 Move-Item ".\B_Comparison_String.cpp" ".\900\B_Comparison_String.cpp"
git add "900/B_Comparison_String.cpp"
git commit -m "B_Comparison_String.cpp"
git push origin master
*/