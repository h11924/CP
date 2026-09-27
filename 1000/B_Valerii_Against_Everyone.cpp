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
        int n;
        cin>>n;

    
        set<int> st;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            st.insert(b);

        }

        if(st.size()==n){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}


/*

Move-Item ".\B_Valerii_Againts_Everyone.cpp" ".\1000\B_Valerii_Againts_Everyone.cpp"
git add "1000/B_Valerii_Againts_Everyone.cpp"
git commit -m "B_Valerii_Againts_Everyone.cpp"
git pull --rebase origin master
git push origin master

*/