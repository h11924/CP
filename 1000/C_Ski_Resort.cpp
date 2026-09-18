/*#include <bits/stdc++.h>
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

ll calculate(ll L, ll k) {
    if (L < k) return 0;
    ll m = L - k + 1;
    return (m * (m + 1)) / 2;
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        int n,k,q;
        cin>>n>>k>>q;

        vector<int>aa (n);

        for(int i=0;i<n;i++){
            int a;
            cin>>a;

            aa[i]=a;
        }

        int i=0;
        int j=0;

        ll answer=0;
        
        while(i<aa.size() && j<aa.size()){
            //lets see when temp is less than q we will add in answer
            //than keep going ahead  
            if(aa[j]>q){//when the temp is high
                //now we will check if the we got the min days in resort
                if(j-i >= k){
                    //means we got a segement and now we need to calcualte the days 
                    //ans+=calculate(j-i+1)//this function will take the interetr and calculate the number of subsets here
                    ll L = j - i;
                answer += calculate(L, k);
                i=j+1; 
                }

            }//else if the tenpere is less only we just keep going ahead
            j++; 
        }

        ll L = j - i;
        answer += calculate(L, k);

        cout<<answer<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\C_Ski_Resort.cpp" ".\1000\C_Ski_Resort.cpp"
git add "1000/C_Ski_Resort.cpp"
git commit -m "C_Ski_Resort.cpp"
git pull --rebase origin master
git push origin master

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll calculate(ll L, ll k) {
    if (L < k) return 0;
    ll m = L - k + 1;
    return (m * (m + 1)) / 2;
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> aa(n);
        for(int i = 0; i < n; i++) {
            cin >> aa[i];
        }

        int i = 0;
        int j = 0;
        ll answer = 0;
        
        while (j < n) {
            if (aa[j] > q) {
                ll L = j - i;
                answer += calculate(L, k);
                i = j + 1; // Always reset i when an invalid element is hit
            }
            j++; 
        }

        // Process final segment
        ll L = j - i;
        answer += calculate(L, k);

        cout << answer << "\n";
    }
    
    return 0;
}