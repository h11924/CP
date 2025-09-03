//the min is we can jump one so we can also jump just 1 and reach the goal...but if the the condition denies than we will jump x-1 and return 2.

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
       
        int x;
        cin>>x;
        int k;
        cin>>k;

        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }else{
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }

     
    }
}
