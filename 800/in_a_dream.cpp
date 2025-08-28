#include<bits/stdc++.h>
using namespace std;
#define ll long long


int solve(int a,int b){
    int maxi=max(a,b);
    int mini=min(a,b);

    if(maxi<=(2*(mini+1))){
        return 1;
}
    return 0;
}


int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int b;
        cin>>b;
        int c;
        cin>>c;
        int d;
        cin>>d;

        if(solve(a,b)==1 && solve(c-a,d-b)==1){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
}
}
