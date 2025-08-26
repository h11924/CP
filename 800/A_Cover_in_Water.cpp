#include<bits/stdc++.h>
using namespace std;

bool dots(string &s,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt++;
        }
    }

    return (cnt%3==0) || (cnt%4==);
}

void solve(string s, int n){

    int count=0;

    bool ans=dots(s,n);
    if(ans){
        cout<<"2";
    }
    else {
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
            }
        }
        cout<<count;
    }
    



}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; // size of the string
        string s;
        cin>>s; // input string
        solve(s,n);
        cout<<endl;
    }
}