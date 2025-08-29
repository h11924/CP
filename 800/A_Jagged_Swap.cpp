#include<bits/stdc++.h>
using namespace std;
#define ll long long

  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
       
        int n; // Read the size of the array
        cin >> n;
        vector<int> arr(n); // Initialize the vector with size n
        for(int i = 0; i < n; i++){
            cin >> arr[i]; // Read elements into the vector
        }

        if(arr[0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        

}}
