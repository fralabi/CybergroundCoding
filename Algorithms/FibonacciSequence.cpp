#include <iostream>

using namespace std;

//Fibonacci Sequence
void fibonacciSequence (int num) {
  static int first_num = 0, second_num = 1, third_num;
  if(num > 0) {
  third_num = first_num + second_num;
  first_num = second_num;
  second_num = third_num;
  cout << third_num << endl;
  fibonacciSequence(num - 1);
  }
}

int main () {
    fibonacciSequence(5);
}

/* OUTPUT
  1
  2
  3
  5
  8
*/
