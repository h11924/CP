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
        int n ;
        cin>>n;

        int a=1;
        int b=n-1;

        ll mini=LLONG_MAX;
        ll x=0;
        ll y=0;

        while(a<=b){
            ll lcm=(a*b)/__gcd(a,b);

            if(lcm<mini){
                mini=lcm;
                x=a;
                y=b;
            }
            a++;
            b--;


        }
        cout<<x<<" "<<y<<endl;


        /**
         * LCM(a,b) = (a × b) / GCD(a,b)
         * this is most importnt thing nevere forget this broooo
         * ll lcm = (1LL*a*b)/__gcd(a,b);
         

        //we need to find a function to look for the lcm
        int mini=INT_MAX;
        pair<int,pair<int,int>> finalanswer ={mini,{0,0}};


        for(int i=0;i<ans.size();i++){
            int aa=ans[i].first;
            int bb=ans[i].second;

            finalanswer={min(mini,LCM(aa,bb)),{aa,bb}};

            

            //need to learn to find lcm bro 

        }

        cout<<finalanswer.second.first<<" "<<finalanswer.second.second<<endl;
    }*/
    }
    
    return 0;
}


/*

Move-Item ".\M_Minimum_LCM.cpp" ".\1000\M_Minimum_LCM.cpp"
git add "1000/M_Minimum_LCM.cpp"
git commit -m "M_Minimum_LCM.cpp TLE Solution"
git pull --rebase origin master
git push origin master

*/