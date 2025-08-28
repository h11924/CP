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
        int ele;
        cin>>ele;
        if(ele%3==0){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
}
