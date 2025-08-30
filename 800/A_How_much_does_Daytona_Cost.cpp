#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve (vector<int>&a,int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}



int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        solve(a,n,k);

       
    }
}
