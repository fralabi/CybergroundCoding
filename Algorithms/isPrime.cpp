#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}


int main () {
    int N;
    cout << "Insert a number" <<  endl;
    cin >> N;

    if (isPrime(N)) {
        cout << N << " is prime" << endl;
    }
    else {
        cout << N << " is not prime" << endl;
    }
}
