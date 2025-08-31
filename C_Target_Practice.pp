#include<bits/stdc++.h>
using namespace std;
#define ll long long

std::vector<std::vector<int>> vec =
{
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};

int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
   
    while(t--){
        vector<vector<char>>board(10,vector<char>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>board[i][j];
            }
        }
         int score=0;

        
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(board[i][j]=='X'){
                    score+=vec[i][j];
                }
            }
        }

         cout<<score<<endl;

        
    }

   
}
