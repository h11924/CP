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
    
    string s;
    cin>>s;

    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }

    // Print the modified string directly
    cout << s << "\n";

    /*if(s[0]=='a') s[0]='A';
    else if(s[0]=='b') s[0]='B';
    else if(s[0]=='c') s[0]='C';
    else if(s[0]=='d') s[0]='D';
    else if(s[0]=='e') s[0]='E';
    else if(s[0]=='f') s[0]='F';
    else if(s[0]=='g') s[0]='G';
    else if(s[0]=='h') s[0]='H';
    else if(s[0]=='i') s[0]='I';
    else if(s[0]=='j') s[0]='J';
    else if(s[0]=='k') s[0]='K';
    else if(s[0]=='l') s[0]='L';
    else if(s[0]=='m') s[0]='M';
    else if(s[0]=='n') s[0]='N';
    else if(s[0]=='o') s[0]='O';
    else if(s[0]=='p') s[0]='P';
    else if(s[0]=='q') s[0]='Q';
    else if(s[0]=='r') s[0]='R';
    else if(s[0]=='s') s[0]='S';
    else if(s[0]=='t') s[0]='T';
    else if(s[0]=='u') s[0]='U';
    else if(s[0]=='v') s[0]='V';
    else if(s[0]=='w') s[0]='W';
    else if(s[0]=='x') s[0]='X';
    else if(s[0]=='y') s[0]='Y';
    else if(s[0]=='z') s[0]='Z';

    for(ll i=0;i<s.size();i++){
        cout<<a[i];
    }
    cout<<endl;*/
    
    return 0;
}


/*

Move-Item ".\A_Word_Capitalization.cpp" ".\800\A_Word_Capitalization.cpp"
git add "800/A_Word_Capitalization.cpp"
git commit -m "A_Word_Capitalization.cpp"
git pull --rebase origin master
git push origin master

*/