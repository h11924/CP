#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> solve(int n ,vector<int>a){

        vector<int> ans;
        ans.push_back(a[0]);

        for(int i=1;i<a.size();i++){
            if(a[i]<a[i-1]){
                ans.push_back(a[i]);
            }

            ans.push_back(a[i]);
        }

        return ans;


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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> ans =sol.solve(n,arr);

        cout<<ans.size()<<endl;

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
