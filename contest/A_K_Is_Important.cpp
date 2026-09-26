#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
        int n,k;
        cin>>n>>k;

        vector<ll> aa(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            aa[i]=a;
        }

        tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> s;

        for(int i=0;i<n;i++) {
            s.insert(i);
        }

        ll score=0;

        while((int)s.size()>=k) {


            int x=*s.find_by_order(k-1);//element k on left 
            int y=*s.find_by_order(s.size()-k);//lement k on right 


            if(aa[x]>=aa[y]) {
                score+=aa[x];
                s.erase(x);
            }
            else {
                score+=aa[y];
                s.erase(y);
            }
        }

        /*int i1=k;
        int i2=n-k+1;

        if(aa[i1]>aa[i2]){
            score+=a[i1];
        }else {
            score+=a[i2];
        }*/

        //we choose the numer which will contrbuite the most and add it to the score 
        //but now how will i remove this from the array??
        //will i replace that elemenet with - 1 and than reiterate and than add all teh new elemenets in the new array whwre -1 element is not there??
        cout<<score<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_K_Is_Important.cpp" ".\contest\A_K_Is_Important.cpp"
git add "contest/A_K_Is_Important.cpp"
git commit -m "A_K_Is_Important.cpp"
git pull --rebase origin master
git push origin master

*/