//we are just returning the (n+1-a),the new permutaion 

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void  solve(int n, vector<int> &a){

        vector<int> ans;
        for(int i=0;i<a.size();i++){
            ans.push_back(n+1-a[i]);
        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
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
        int n ;
        cin>>n;

        vector<int> ans; // Corrected: Declare an empty vector 'a'
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            ans.push_back(temp); // Corrected: Use push_back to add elements
        }


        sol.solve(n ,ans);
        
        cout<<endl;
    }
}
