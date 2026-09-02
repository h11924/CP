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
if(kingpoints[i]==queenpoints[j]){
ans++;
break;
}
}
}

cout<<ans<<endl;
}

return 0;
}