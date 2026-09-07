/*nclude <bits/stdc++.h>
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
        int n;
        cin>>n;

        string s;
        cin>>s;

        string t;
        cin>>t;

        map<char,int>mp;
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }//we have all in map now 

        for(int i=s.length()-1;i>=0;i--){
            if(mp.find(s[i])==mp.end()){
                //the element we are at is not required by us 
                //than we can just erase it from s string 
                s.erase(i,1);
            }else {
                //if the element is in map so we will make the 
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                
            }
        }
        //if map is empty than yes 
        if(mp.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
    }
    
   
}
 return 0;

}



/*

Move-Item "900/D_Deletive_Editing.cpp".\900\D_Deletive_Editing.cpp"
git add "900/D_Deletive_Editing.cpp"
git commit -m "D_Deletive_Editing.cpp"
git pull --rebase origin master
git push origin master

*/

#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std; // Allows us to use standard names directly

int main()
{
long long test; // Stores the number of test cases
cin >> test; // Takes the number of test cases as input

while(test--) // Runs once for every test case
{
string s,t; // s is the original string, t is the target string
cin >> s >> t; // Takes both strings as input

int n=s.size(); // Stores the length of string s
int m=t.size(); // Stores the length of string t

vector<int> frequency_in_t(26,0); // Stores frequency of each uppercase letter in t

for(int i=0;i<m;i++) // Traverses through string t
frequency_in_t[t[i]-'A']++; // Increases frequency of the current character

for(int i=n-1;i>=0;i--) // Traverses string s from right to left
{
if(frequency_in_t[s[i]-'A']>0) // Checks if this character is still required in t
frequency_in_t[s[i]-'A']--; // Keeps this occurrence and decreases its required frequency
else
s[i]='.'; // Marks this occurrence for deletion
}

string final_string=""; // Stores the string after deleting unwanted characters

for(int i=0;i<n;i++) // Traverses the modified string s
{
if(s[i]!='.') // Checks if the character was not marked for deletion
final_string+=s[i]; // Adds the character to the final string
}

if(final_string==t) // Checks whether the resulting string is exactly t
cout<<"YES"<<endl; // Prints YES if the strings match
else
cout<<"NO"<<endl; // Prints NO otherwise
}

return 0; // Ends the program successfully
}