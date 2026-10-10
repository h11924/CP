#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
         ll n;
         cin>>n;

         ll sum=0;
         ll neg=0;
         ll mini=LLONG_MAX;

         for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a<0){
                neg++;
            }
            sum+=abs(a);
            mini=min(abs(a),mini);

         }

         ll ans=0;

         if(neg%2==0){
            ans=sum;
         }
         else{
            ans=sum-(2*mini);
         }

         cout<<ans<<endl;
        
        }

        
    }


/*
Move-Item ".\E_Negatives_and_Positives.cpp" ".\1100\E_Negatives_and_Positives.cpp"
git add "1100/E_Negatives_and_Positives.cpp"
git commit -m "E_Negatives_and_Positives.cpp"
git pull --rebase origin master
git push origin master
*/