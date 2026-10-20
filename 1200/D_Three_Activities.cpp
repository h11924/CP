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
        int n;
        cin >> n;
        vector<pair<int,int>> a(n), b(n), c(n);

        for(int i=0;i<n;i++) {
            cin >> a[i].first;
            a[i].second=i;
        }
        for(int i=0;i<n;i++) {
            cin >> b[i].first;
            b[i].second=i;
        }
        for(int i=0;i<n;i++) {
            cin >> c[i].first;
            c[i].second=i;
        }
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        sort(c.rbegin(),c.rend());

        long long ans=0;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                for(int k=0;k<3;k++) {
                        if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second) {
                            ans=max(ans,1LL*a[i].first+b[j].first+c[k].first);
                        }
                    }
                }
            }cout<<ans<<endl;
    }

    
    
    return 0;
}


/*

Move-Item ".\D_Three_Activities.cpp" ".\1200\D_Three_Activities.cpp"
git add "1200/D_Three_Activities.cpp"
git commit -m "D_Three_Activities.cpp"
git pull --rebase origin master
git push origin master

*/