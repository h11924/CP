#/*include <bits/stdc++.h>
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
    
    ll n,q;
    cin>>n>>q;

    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll>q(n);
    for(int i=0;i<n;i++){
        cin>>q[i];

    }

    //put all in stack in reverse order...the last element goes first
    //start poping elements till we find q and put the popped in oter stack and put elemnst back 
    // keep a count and keep doing this 

    stack<ll> st1;
    stack<ll> st2;

    //we want the last elemenest to be down 
    for(ll i=a.size()-1;i>=0;i--){
        st1.push(a[i]);
    }

    vector<ll>ans;

    for(ll i=0;i<q.size();i++){
        ll ele=q[i];
        ll cnt=0;
        while(!st1.empty()){
            cnt++;
            
            st2.push(st1.top());
            st1.pop();

            if(st1.top()==ele){
                ans.push_back(cnt);
            }

        }//we got the element and answer also,now put back all st2 to st1
        while(!st2.empty()){
            ll e=st2.top();
            st1.push(e);
            st2.pop();

        }
        st2.push(ele);
    }
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
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
    
    ll n, q;
    if (!(cin >> n >> q)) return 0;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> query(q);
    for (int i = 0; i < q; i++) {
        cin >> query[i];
    }

    stack<ll> st1;
    stack<ll> st2;

    // Push elements in reverse order so top card (a[0]) is at the top of st1
    for (ll i = n - 1; i >= 0; i--) {
        st1.push(a[i]);
    }

    vector<ll> ans;

    for (ll i = 0; i < q; i++) {
        ll ele = query[i];
        ll cnt = 0;

        // Search for the first occurrence of ele from top to bottom
        while (!st1.empty()) {
            cnt++;
            ll current = st1.top();
            st1.pop();

            if (current == ele) {
                ans.push_back(cnt);
                break; // Found the highest card of color 'ele'
            } else {
                st2.push(current); // Temporarily store cards above 'ele'
            }
        }

        // Put all temporary cards back onto st1
        while (!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }

        // Place the target card 'ele' on TOP of the deck (st1)
        st1.push(ele);
    }

    for (ll i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}


/*

Move-Item ".\C_Yet_Another_Card_Deck.cpp" ".\1100\C_Yet_Another_Card_Deck.cpp"
git add "1100/C_Yet_Another_Card_Deck.cpp"
git commit -m "C_Yet_Another_Card_Deck.cpp"
git pull --rebase origin master
git push origin master

*/