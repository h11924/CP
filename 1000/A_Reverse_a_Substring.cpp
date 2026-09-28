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
    
   
    
    
        ll n;
        cin>>n;

        string s;
        cin>>s;

        bool ans=false;

        for(int i=0;i<n-1;i++){
            if(s[i]>s[i+1]){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                ans=true;
                break;
            }
        }
        if(ans==false) cout<<"NO"<<endl;
    
    
    return 0;
}


/*

Move-Item ".\A_Reverse_a_String.cpp" ".\1000\A_Reverse_a_String.cpp"
git add "1000/A_Reverse_a_String.cpp"
git commit -m "A_Reverse_a_String.cpp"
git pull --rebase origin master
git push origin master

*/