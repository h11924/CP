/*If x
 is even, divide x
 by 2
.
Otherwise, set x
 to 3⋅x+1
.*/


#include <iostream>
using namespace std;        

int main() {

    

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

       
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cout<< (n+1)-x <<" ";
        }

        cout<<endl;



    }



    


    
}

