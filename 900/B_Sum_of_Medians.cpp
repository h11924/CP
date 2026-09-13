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
        cin>>n;

        int k;
        cin>>k;

        vector<int>aa(n*k);

        for(int i=0;i<n*k;i++){
            int a;
            cin>>a;

            aa[i]=a;
            
        }

        //int stop=ceil(n/2);
        int stop = n * k - 1 - n / 2;
        ll sum=0;

        /*for(int i=n*k;i>=0;i--){
            if(i==stop) sum+=aa[i];
            stop=stop-ceil(n/2);
        }*/
        for(int j = 0; j < k; j++){
                sum += aa[stop];
                stop -= n / 2 + 1;
        }

        cout<<sum<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Sum_of_Medians.cpp" ".\900\B_Sum_of_Medians.cpp"
git add "900/B_Sum_of_Medians.cpp"
git commit -m "B_Sum_of_Medians.cpp"
git pull --rebase origin master
git push origin master

*/