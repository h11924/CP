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
        int n;
        cin >> n;

        vector<int>aa(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            aa[i]=a;
        }
        ll count=0;
        /*for(int i=n-2;i>=0;i--){

            while(aa[i+1]<aa[i]){
                aa[i]/=2;

                count++;

                if(aa[i]==0) count=0;
            }
        }

        if(count!=0){
            
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }*/


for(int i=n-2;i>=0;i--){
while(aa[i]>=aa[i+1]){
count++;
aa[i]/=2;

if(aa[i]==0)
break;
}

if(aa[i]==0 && aa[i+1]==0){
count=-1;
break;
}
}

cout<<count<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Make_It_Increasing.cpp" ".\900\B_Make_It_Increasing.cpp"
git add "900/B_Make_It_Increasing.cpp"
git commit -m "B_Make_It_Increasing.cpp"
git pull --rebase origin master
git push origin master

*/