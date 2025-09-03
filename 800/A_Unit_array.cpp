//we will get + >0 if the no of 1 are greater than -1

//we will get . of all as 1 if negetives are even in no 

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int  solve(int n ,vector<int> arr){
        
        int one=0;
        int minusone=0;

        for(int i=0;i<n;i++){
            if(arr[i]==1){
                one++;
            }
            else {
                minusone++;
            }
        }

        int changes = 0;

       
        while (one < minusone) {
            minusone--;
            one++;
            changes++;
        }
        
      
        if (minusone % 2 != 0) {
            changes++;
        }

        return changes;


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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
        }

        int ans =sol.solve(n,arr);
        cout<<ans<<endl;
    }
}
