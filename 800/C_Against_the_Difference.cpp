#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(vector<int> arr){
        unordered_map<int,int> mp;
        int ans=arr.size();

        for(int i=0;i<arr.size();i++){
            if(arr[i]!=arr.size()){
                break;

            }
        }
        cout<<arr.size()<<endl;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        for(auto it:mp){
            if(it.second!=it.first && it.first!=1 ){
                ans-=it.second;
                
            }
        }

        cout<<ans<<endl;

        

    }
};

int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        vector<int> arr;
        for(int i=0;i<arr.size();i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        Solution sol;
        sol.solve(arr);
    }
}