//this will happen by sliding window easily 

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(int n,vector<int> ans ){

        int left=0;
        int right=0;
        int maxi=0;
        int cnt=0;

        for(int i=0;i<n;i++){
            if(ans[i]==1){
                maxi=max(maxi,cnt);
                cnt=0;
            }
            else if(ans[i]==0){
                cnt++;
                maxi=max(maxi,cnt);
            }
        }
      
        
       

        cout<<maxi<<endl;

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
        int n ;
        cin>>n;

       

         vector<int> ans; // Corrected: Declare an empty vector 'a'
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            ans.push_back(temp); // Corrected: Use push_back to add elements
        }

        sol.solve(n,ans);
        
    }
}
