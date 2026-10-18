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

        vector<ll>a(n);

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll left=0;
        ll right=n-1;

        ll remove_val1 = -1;
        ll remove_val2 = -1;
        ll final=-1;

        while(left<=right){
            //suppose right is not equal to left so 
            if(a[right]!=a[left] ){
                 //we are here for forst time 
                if(final==-1){
                    rr= a[right];
                    ll=a[left];

                    r--;
                    if(a[right]==a[left]){
                        //we went right behind
                        final=a[right];
                    }
                    l++;
                    if(a[right]==a[left]){
                        final=a[left];

                    }
                }

                 //we were here earlier as well

                if(final!=-1){
                    //means we have some a[i] which is already selected
                    if(a[right]==final){
                        right--

                    }else if(a[left]==final){
                        left++;
                    }
                    //but the element is something else so we know we cant remove so just move and just break
                    else{
                        final=-1;
                        break;
                    }

            }

            if(final==-1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;


        }
    }
    
    return 0;
}

}


/*

Move-Item ".\A_AvtoBus.cpp" ".\1100\A_AvtoBus.cpp"
git add "1100/A_AvtoBus.cpp"
git commit -m "A_AvtoBus.cpp"
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
    
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll left = 0;
        ll right = n - 1;

        ll remove_val1 = -1;
        ll remove_val2 = -1;

        // Find the first mismatch
        while (left < right) {
            if (a[left] != a[right]) {
                remove_val1 = a[left];
                remove_val2 = a[right];
                break;
            }
            left++;
            right--;
        }

        // If no mismatch, it's already a palindrome
        if (remove_val1 == -1) {
            cout << "YES" << endl;
            continue;
        }

        // Check 1: Ignore all occurrences of remove_val1
        bool ok1 = true;
        ll l = 0, r = n - 1;
        while (l < r) {
            if (a[l] == remove_val1) {
                l++;
            } else if (a[r] == remove_val1) {
                r--;
            } else if (a[l] != a[r]) {
                ok1 = false;
                break;
            } else {
                l++;
                r--;
            }
        }

        // Check 2: Ignore all occurrences of remove_val2
        bool ok2 = true;
        l = 0;
        r = n - 1;
        while (l < r) {
            if (a[l] == remove_val2) {
                l++;
            } else if (a[r] == remove_val2) {
                r--;
            } else if (a[l] != a[r]) {
                ok2 = false;
                break;
            } else {
                l++;
                r--;
            }
        }

        if (ok1 || ok2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}


/*

Move-Item ".\B_Kalindrome_Array.cpp" ".\1100\B_Kalindrome_Array.cpp"
git add "1100/B_Kalindrome_Array.cpp"
git commit -m "B_Kalindrome_Array.cpp"
git pull --rebase origin master
git push origin master

*/