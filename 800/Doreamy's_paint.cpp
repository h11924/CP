#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(vector<int> arr){
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        if(mp.size()>2){
            cout<<"No"<<endl;
           
        }else if(mp.size()==1){
            cout<<"Yes"<<endl;
      
        }else if(mp.size()==2){
            auto it=mp.begin();
            int f1=it->second;
            it++;
            int f2=it->second;
            if(abs(f1-f2)==1  || abs(f1-f2)==0){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }

    }
};

int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        Solution sol;
        int n;
        cin >> n;
        vector<int> arr(n);     
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sol.solve(arr);
    }
}
