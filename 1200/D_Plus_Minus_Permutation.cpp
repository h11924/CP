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
        ll n,x,y;
        cin>>n>>x>>y;

        ll countx=0;
        ll county=0;

        //so we need to see all the divisibles of 1 to n in x and y
        //so lets put a loop and check like that??
        for(int i=1;i<=n;i++){
            if(i%x==0){
                countx++;
            }
            if(i%y==0){
                county++;
            }
            if(i&y==0 && i&x==0){
                countx--;
                county--;
            }
        }

        ll ans1=0;

        for(ll i=n;i<=countx;i--){
            ans1+=i;

        }
        ll ans2=0;
        for(ll i=1;i<=county;i++){
            ans2+=i;
        }

        ll ans=ans1-ans2;
        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\D_Plus_Minus_Permutation.cpp" ".\1200\D_Plus_Minus_Permutation.cpp"
git add "1200/D_Plus_Minus_Permutation.cpp"
git commit -m "D_Plus_Minus_Permutation.cpp"
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



int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n,x,y;
        cin>>n>>x>>y;

        //ll l=lcm(x,y);
        ll lcm=x/__gcd(x,y)*y;
        //find the lcm of these numbers 
        //to get the numbers we need to divide n/x and y/x

        ll nox=n/x;
        ll noy=n/y;

        nox=nox-n/lcm;
        noy=noy-n/lcm;

        //so nox and noy are the final thing 

        //we need to subreact lcm value from both
        

      
        //now put all max numbers in nox 
        /*for(ll i=n;i>n-nox;i--){
            sum1+=i;
        }
        for(ll i=1;i<=noy;i++){
            sum2+=i;
        }*/

        ll sum1=nox*(2*n-nox+1)/2;
        ll sum2=noy*(noy+1)/2;

        cout<<sum1-sum2<<endl;





    }
    
    return 0;
}
