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
        
        int  n;
        cin>>n;
        ll sum=0;
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<-sum<<endl;
    }

    return 0;
}






