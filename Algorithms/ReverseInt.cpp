#include <iostream>

using namespace std;

int reverseInt(int number) {
    int reverse_number=0;
    while (number != 0)
        {
        reverse_number*=10;
        reverse_number += number % 10;
        number /=10;
        }
        return reverse_number;
}

int main () {
    int N;
    cout << "Insert a number" <<  endl;
    cin >> N;

    cout << "The reverse of " << N << " is " << reverseInt(N) << endl;
}
