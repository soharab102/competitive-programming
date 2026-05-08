#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int main()
{

    int A, B;
    cin >> A >> B;
    if(A==0 || B==0)
    {
        cout << 0;
        return 0;
    }
    cout << gcd(A, B);

    return 0;
}