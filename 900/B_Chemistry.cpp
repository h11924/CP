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



int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        int cntodd=0;
        for(auto it:mp){
            if(it.second%2!=0){
                cntodd++;
            }
        }

        //now we want to make all the odd as even 
        //so we want k to be equal to cntodd

        if(cntodd>k+1){//k is the number of odd occurance we are removing  but we can keep one odd occurance so we can keep k+1 odd occurance
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    
    return 0;
}


/*
git add "900/B_Chemistry.cpp"
git commit -m "B_Chemistry.cpp"
git push origin master
*/