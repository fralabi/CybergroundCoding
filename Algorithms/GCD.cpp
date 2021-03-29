#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main () {
    int N,M;

    cout << "Insert two numbers" <<  endl;
    cin >> N >> M;

    cout << "GCD of " << N << " and " << M << " is " << gcd(N,M) << endl;
}
