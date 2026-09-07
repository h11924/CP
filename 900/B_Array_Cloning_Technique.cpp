#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        //we will count the number of copies and swaps seperatly 
        //the swaps will be (n-maxfreq)
        
        //lets calculate the max freq

        int n;
        cin>>n;

        vector<int> aa(n);

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            aa[i]=a;
        }

        map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[aa[i]]++;
        }

        int maxi=0;
        for(auto i : mp){
            maxi=max(maxi,i.second);
        }

        int swaps=n-maxi;
        //so the max number of swaps will the no of elemenst which needs to be swapped 
        //we want the 
        //to count how many copes we need
        int copies=0;

        while(maxi<n){
            maxi=maxi*2;
            copies++;
        }

        int ans=copies+swaps;

        cout<<ans<<endl;

    }
    
    return 0;
}


/*

Move-Item ".\B_Array_Cloning_Technique.cpp" ".\900\B_Array_Cloning_Technique.cpp"
git add "900/B_Array_Cloning_Technique.cpp"
git commit -m "B_Array_Cloning_Technique.cpp"
git pull --rebase origin master
git push origin master

*/