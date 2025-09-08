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
        int a;
        cin>>a;


        int b;
        cin>>b;

        if(a==b){
            cout<<0<<endl;
        }

        else if(a%b==0 || b%a==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

       
        

       



    }



    


    
}

