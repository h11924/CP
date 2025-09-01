#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    bool solve(int n,vector<int> a){

        unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }

        if(mp.size()==1){
            return true;
        }
        return false;


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

        if(sol.solve(n,arr)){
            cout<<-1<<endl;//this is when the size is 1 
        }

        else {
    // size isn't 1
    vector<int> b;
    vector<int> c;

    sort(arr.begin(), arr.end());

    int max_val = arr.back();
    int cnt = 1; // at least one max
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] == max_val) {
            cnt++;
        } else {
            break;
        }
    }

    // b gets first n - cnt elements
    for (int i = 0; i < n - cnt; i++) {
        b.push_back(arr[i]);
    }
    // c gets last cnt elements (all max)
    for (int i = n - cnt; i < n; i++) {
        c.push_back(arr[i]);
    }

    cout << b.size() << " " << c.size() << endl;
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

}
}
