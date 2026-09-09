#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std; // Allows us to use standard library names directly

int main()
{
long long t; // Stores the number of test cases
cin >> t; // Takes the number of test cases

while(t--) // Runs for every test case
{
long long a,b; // Stores the two numbers
cin >> a >> b; // Takes a and b as input

if(b>a) // We want a to be the larger number
swap(a,b); // Swap them if b is larger

if(a==b) // If both numbers are already equal
cout << 0 << " " << 0 << endl; // Difference is 0, so no operations are needed

else
{
long long gcd=a-b; // The required difference between a and b

// We can reduce both numbers by multiples of gcd
// b%gcd tells how much b is away from the nearest lower multiple of gcd
// gcd-(b%gcd) tells how much b is away from the nearest higher multiple
long long answer=min(b%gcd,gcd-b%gcd); // Choose the smaller number of moves

cout << gcd << " " << answer << endl; // Print the gcd/difference and minimum moves
}
}

return 0; // End the program
}