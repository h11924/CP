//make all the nos as positive and than chaeck for magnitude only 

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {

       vector<long long> makeallpos(const vector<int>& arr){
        vector<long long> res;
        for(int i=0; i<arr.size(); i++){
            res.push_back(abs(static_cast<long long>(arr[i])));
        }
        return res;
    }

    long long minimum(const vector<long long>& arr){
        if (arr.empty()) {
            return 0;
        }
        long long mini = arr[0];
        for(int i=1; i<arr.size(); i++){
            mini = min(mini, arr[i]);
        }
        return mini;
    }
   
public:
    int solve(int n ,vector<int>&arr){
        vector<long long >res=makeallpos(arr);
        long long mini=minimum(res);

        return mini;
}
};

int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    
        Solution sol;
        int n ;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=sol.solve(n,arr);
        cout<<ans<<endl;
    

    return 0;
}

