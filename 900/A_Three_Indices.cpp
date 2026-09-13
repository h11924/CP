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
        int n ;
        cin>>n;

        vector<int>pp(n);

        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            pp[i]=p;
        }

        bool ans=false;

        for(int i=0;i<n-2;i++){
            //i,i+1,i+2;
            if(pp[i+1]>pp[i] && pp[i+1]>pp[i+2]){
                cout<<"YES"<<endl;
                cout<<i+1<<' '<<i+2<<' '<<i+3<<endl;
                ans=true;
                break;
                
            }
        }

        if(ans==false) cout<<"NO"<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_Three_Indices.cpp" ".\900\A_Three_Indices.cpp"
git add "900/A_Three_Indices.cpp"
git commit -m "A_Three_Indices.cpp"
git pull --rebase origin master
git push origin master

*/