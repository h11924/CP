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
        ll a,b;
        cin>>a>>b;

        if(a==0 && b==0) cout<<0<<endl;
        else if(a==0 && b==1) cout<<1<<endl;
        else if(a==0 && b>1) cout<<-1<<endl;
        else if(a>b) cout<<a+1<<endl;
        else if(b>a) cout<<b<<endl;
        else cout<<a<<endl;
    
    
}return 0;
}

/*

Move-Item ".\A_Robot_Odd_Moves.cpp" ".\contest\A_Robot_Odd_Moves.cpp"
git add "contest/A_Robot_Odd_Moves.cpp"
git commit -m "A_Robot_Odd_Moves.cpp"
git pull --rebase origin master
git push origin master

*/

/*#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while (t--) {
ll a, b;
cin >> a >> b;

if (a == 0) {
if (b == 0) cout << 0 << "\n";
else if (b == 1) cout << 1 << "\n";
else cout << -1 << "\n";
}
else if (a > b) {
cout << a + 1 << "\n";
}
else {
cout << b << "\n";
}
}

return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (b <= a && (a - b) % 2 == 0) cout << a << "\n";
        else if (b <= a + 1 && (a + 1 - b) % 2 == 0) cout << a + 1 << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}