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

    int t=1;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        ll ans=b;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            ans+=min(x,a-1);
        }

        cout<<ans<<"\n";
    }

    return 0;
}

 /*
 Move-Item ".\A_Jellyfish_and_Undertale.cpp" ".\900\A_Jellyfish_and_Undertale.cpp"
git add "900/A_Jellyfish_and_Undertale.cpp"
git commit -m "A_Jellyfish_and_Undertale.cpp"
git push origin master
*/
