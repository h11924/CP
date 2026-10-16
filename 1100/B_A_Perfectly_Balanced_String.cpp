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


int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        string s;
        cin>>s;

        map<char,int>mp;

        for(int i=0;i<s.size();i++){
            
            if(mp.find(s[i])==mp.end()) mp[s[i]]=-1;
        }
        ll k=mp.size();
        //so here first is char and than -1
        //lets put a loop again and see put the first occurance here 

        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==-1){
                mp[s[i]]=i;
            }
            //so the first occurance is stored here
        }

        bool ans=true;
     

        for(int i=0;i<s.size();i++){
            ll current=i;
            ll prev=mp[s[i]].second;

            if(current-prev<k) {
                ans=false;
                break;
            }else{
                prev=current;
                mp[s[i]].second=current;
            }

        }

        if(ans==true){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }

        

        
        //so we have k with us now 
        
        
    }
    
    return 0;
}


/*

Move-Item ".\B_A_Perfectly_Balanaced_String.cpp" ".\1100\B_A_Perfectly_Balanaced_String.cpp"
git add "1100/B_A_Perfectly_Balanaced_String.cpp"
git commit -m "B_A_Perfectly_Balanaced_String.cpp"
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
string s;
cin >> s;

map<char,int> mp;

for(int i=0;i<s.size();i++){
if(mp.find(s[i])==mp.end()) mp[s[i]]=-1;
}

ll k=mp.size();
bool ans=true;

for(int i=0;i<s.size();i++){
if(mp[s[i]]!=-1 && i-mp[s[i]]<k){
ans=false;
break;
}
mp[s[i]]=i;
}

if(ans==true){
cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}
}

return 0;
}
