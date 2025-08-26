#include<bits/stdc++.h>
using namespace std;

bool iscon(string s,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt++;
        }if(s[i]=='#' && cnt<3){
            cnt=0;
        }if(cnt==3){
            return true;
        }

    }return false;

    
}


void answer (string s,int n ){

    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            count++;
                }
    }
    if(iscon(s,n)){
        cout<<2;
    }
    else {
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
        answer(s,n);
        cout<<endl;
    }
}