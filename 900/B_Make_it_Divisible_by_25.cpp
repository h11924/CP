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

int solve(string n,vector<char>&array) {

    int nn=n.size();
    int cnt=0;

    int req=false;

    for(int i=nn-1;i>=0;i--){
        
        /*if((req=false && n[i]!=array[1]) || (req==true && n[i]!=array[0])){
            cnt--;
        }else if(n[i]==array[1]){
            req=true;
        }else if(n[i]==array[0]){
            req=false;
            return cnt;
        }*/

        if (!req) {
            if (n[i] == array[1]) {
                req = true;
            } else {
                cnt++;
            }
        } else {
            if (n[i] == array[0]) {
                return cnt;
            } else {
                cnt++;
            }
        }


    }

    return INT_MAX;
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        string n;
        cin>>n;

        vector<char> array1 = {'2', '5'};
        vector<char> array2 = {'5', '0'};
        vector<char> array3 = {'7', '5'};
        vector<char> array4 = {'0', '0'};

        int ans=INT_MAX;

        ans=min(ans,solve(n,array1));
        ans=min(ans,solve(n,array2));
        ans=min(ans,solve(n,array3));
        ans=min(ans,solve(n,array4));

        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Make_it_Divisible_by_25.cpp" ".\900\B_Make_it_Divisible_by_25.cpp"
git add "900/B_Make_it_Divisible_by_25.cpp"
git commit -m "B_Make_it_Divisible_by_25.cpp"
git pull --rebase origin master
git push origin master

*/