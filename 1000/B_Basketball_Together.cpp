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
    
    
    
    
        int N,D;
        cin>>N>>D;

        vector<int>aa(N);
        for(int i=0;i<N;i++){
            int P;
            cin>>P;

            aa[i]=P;
        }

        sort(aa.begin(),aa.end());
        reverse(aa.begin(),aa.end());

        int right=N-1;
        int left=0;

        int count=0;
        int win=0;

        while(left<=right){
            if((aa[left]*(count+1))>D){
                win++;
                left++;
                //right--;
                count=0;
            }else{
                right--;
                count++;
            }

        }

        cout<<win<<endl;




    
    
    return 0;
}


/*

Move-Item ".\B_Basketball_Together.cpp" ".\1000\B_Basketball_Together.cpp"
git add "1000/B_Basketball_Together.cpp"
git commit -m "B_Basketball_Together.cpp"
git pull --rebase origin master
git push origin master

*/