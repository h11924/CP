#include<bits/stdc++.h>

using namespace std;
#define ll long long

class Solution {
public:
    int solve(int x,int n,vector<int> &arr){
        sort(arr.begin(),arr.end());
        int ans=arr[0];
        
        for(int i=1;i<arr.size();i++){
            ans=max(ans,arr[i]-arr[i-1]);

        }
        ans=max(ans,2*(x-arr.back()));
        return ans ;

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
        int n , x;
        cin>>n>>x;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int ans =sol.solve(x,n,arr);

        cout<<ans<<endl;

    }
}
