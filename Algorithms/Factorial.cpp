#include <iostream>

using namespace std;

//Factorial
int factorial(int num) {
   if ( (n==0)||(n==1) ) {
   return 1;
   }
   else {
   return n*factorial(n-1);
   }
}

int main() {
   cout<< factorial(5) ;
   return 0;
}

// OUTPUT: 120
