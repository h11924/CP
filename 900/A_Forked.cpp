#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
using vi = vector<int>;
using vll = vector<long long>;

void fast_io(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}

void solve(){

}

int main(){
fast_io();

int t=1;
cin>>t;

while(t--){
int first,second,kingx,kingy,queenk,queeny;
cin>>first>>second>>kingx>>kingy>>queenk>>queeny;

vector<pair<int,int>> kingpoints;
vector<pair<int,int>> queenpoints;

kingpoints.push_back({kingx+first,kingy+second});
kingpoints.push_back({kingx+first,kingy-second});
kingpoints.push_back({kingx-first,kingy+second});
kingpoints.push_back({kingx-first,kingy-second});
kingpoints.push_back({kingx+second,kingy+first});
kingpoints.push_back({kingx+second,kingy-first});
kingpoints.push_back({kingx-second,kingy+first});
kingpoints.push_back({kingx-second,kingy-first});

queenpoints.push_back({queenk+first,queeny+second});
queenpoints.push_back({queenk+first,queeny-second});
queenpoints.push_back({queenk-first,queeny+second});
queenpoints.push_back({queenk-first,queeny-second});
queenpoints.push_back({queenk+second,queeny+first});
queenpoints.push_back({queenk+second,queeny-first});
queenpoints.push_back({queenk-second,queeny+first});
queenpoints.push_back({queenk-second,queeny-first});

sort(kingpoints.begin(),kingpoints.end());
kingpoints.erase(unique(kingpoints.begin(),kingpoints.end()),kingpoints.end());

sort(queenpoints.begin(),queenpoints.end());
queenpoints.erase(unique(queenpoints.begin(),queenpoints.end()),queenpoints.end());

int ans=0;

for(int i=0;i<kingpoints.size();i++){
for(int j=0;j<queenpoints.size();j++){
if(kingpoints[i]==queenpoints[j]){git add 800/A_Extremely_Round.cpp
git add 800/A_One_and_Two.cpp
ans++;
break;
}
}
}

cout<<ans<<endl;
}

return 0;
}


/*

#include <iostream>
#include <set>
#include <utility>

using namespace std;

// Direction arrays to handle all 4 quadrant signs
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};

void solve() {
    int a, b;
    cin >> a >> b;

    int xk, yk;
    cin >> xk >> yk;

    int xq, yq;
    cin >> xq >> yq;

    set<pair<int, int>> king_hits;
    set<pair<int, int>> queen_hits;

    // Generate all candidate knight positions that attack the King and Queen
    for (int i = 0; i < 4; i++) {
        // From King's perspective
        king_hits.insert({xk + dx[i] * a, yk + dy[i] * b});
        king_hits.insert({xk + dx[i] * b, yk + dy[i] * a});

        // From Queen's perspective
        queen_hits.insert({xq + dx[i] * a, yq + dy[i] * b});
        queen_hits.insert({xq + dx[i] * b, yq + dy[i] * a});
    }

    // Count the intersection of both sets
    int ans = 0;
    for (auto pos : king_hits) {
        if (queen_hits.count(pos)) {
            ans++;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}*/

