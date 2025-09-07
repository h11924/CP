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
        int k;
        cin>>k;

        int x;
        cin >> x;

        while(k!=0){
            x=x*2;
            k--;
        }

        cout<<x<<endl;

    }

    


    
}

