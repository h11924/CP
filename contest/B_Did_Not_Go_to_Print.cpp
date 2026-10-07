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

        string s;
        cin>>s;

        stack<pair<char,int>> st;

        vector<ll>ans;

        for(int i=0;i<n;i++){
            if(st.empty() || st.top().first=='1' || s[i]=='1'){
                st.push({s[i],i});
            }
            if(st.top().first=='1' && s[i]=='2'){
                st.pop();
                ans.push_back(i);
            }
        }

        //if the stack is not emppty than we will print the indexex os the 1's in the stack
        while(!st.empty()){
            if(st.top().first=='1'){
                ans.push_back(st.top().second);
            }
            st.pop();
        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]+1<<" ";
        }
    }
    
    return 0;
}


/*

Move-Item ".\B_Did_Not_Go_to_Print.cpp" ".\contest\B_Did_Not_Go_to_Print.cpp"
git add "contest    \B_Did_Not_Go_to_Print.cpp"
git commit -m "B_Did_Not_Go_to_Print.cpp"
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
ll n;
cin >> n;

string s;
cin >> s;

stack<int> st;
vector<int> ans;

for(int i=0;i<n;i++){
if(s[i]=='1'){
st.push(i);
}
else if(s[i]=='2'){
if(!st.empty()){
st.pop();
ans.push_back(i);
}
}
}

while(!st.empty()){
ans.push_back(st.top());
st.pop();
}

sort(ans.begin(),ans.end());

cout << ans.size() << '\n';

for(int x:ans){
cout << x+1 << " ";
}

cout << '\n';
}

int main() {
fast_io();

int t;
cin >> t;

while(t--){
solve();
}

return 0;
}