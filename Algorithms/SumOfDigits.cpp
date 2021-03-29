#include <iostream>

using namespace std;

long long int sumofdigits (long long int a) {

    long long int sum=0;

    while (a > 0) {
     sum+=a%10;
     a/=10;
    }

    return sum;
}
  
int main () {
  
  int N;
  cout << "Insert a number" << endl;
  cin >> N;
  
  cout << "The sum of digits is " << sumofdigits(N) << endl;
   
}
