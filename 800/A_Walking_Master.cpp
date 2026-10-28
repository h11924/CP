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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d<b) {
            cout<<-1<<endl;
            continue;//skpi the rest of this test case 
        }

        ll up=d-b;//how much up we neded to go 
        ll aa=a+up;//the new a coord after we went up

        if(aa<c){
            //we cannot move right 
            cout<<-1<<endl;
            continue;
        }

        ll leftmoves=aa-c;

        cout<<up+leftmoves<<endl;
        

    }
    
    return 0;
}


/*

Move-Item ".\A_Walking_Master.cpp" ".\800\A_Walking_Master.cpp"
git add "800/A_Walking_Master.cpp"
git commit -m "A_Walking_Master.cpp"
git pull --rebase origin master
git push origin master

*/