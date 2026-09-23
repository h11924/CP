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

void solve() {
    
}

int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n;
        cin>>n;

        vector<int> aa(n);

        for(int i=0;i<n;i++){
            ll s;
            cin>>s;
            aa[i]=s;
            
        }
        bool flag=true;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[aa[i]]++;
            //first elemnt ,second occurance
        }
        for( auto it :mp){
            if(it.second==1){
                cout<<-1<<endl;
                flag=false;
                break;
            }
        }

        if(flag==true){
            cout<<n<<" ";

        for(int i=1;i<n;i++){
            cout<<i<<" ";


        }cout<<endl;
        }

    }
    
    return 0;
}


/*

Move-Item ".\B_Shoe_Shuffling.cpp" ".\1000\B_Shoe_Shuffling.cpp"
git add "1000/B_Shoe_Shuffling.cpp"
git commit -m "B_Shoe_Shuffling.cpp"
git pull --rebase origin master
git push origin master

*/

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
    
    while(t--) {
        int n;
        cin >> n;

        vector<int> aa(n);

        for(int i = 0; i < n; i++) {
            cin >> aa[i];
        }

        bool flag = true;

        for(int i = 0; i < n; ) {
            int j = i;

            while(j < n && aa[j] == aa[i]) {
                j++;
            }

            if(j - i == 1) {
                flag = false;
                break;
            }

            i = j;
        }

        if(flag == false) {
            cout << -1 << endl;
        }
        else {
            vector<int> ans(n);

            for(int i = 0; i < n; ) {
                int j = i;

                while(j < n && aa[j] == aa[i]) {
                    j++;
                }

                for(int k = i; k < j - 1; k++) {
                    ans[k] = k + 2;
                }

                ans[j - 1] = i + 1;

                i = j;
            }

            for(int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }

            cout << endl;
        }
    }
    
    return 0;
}