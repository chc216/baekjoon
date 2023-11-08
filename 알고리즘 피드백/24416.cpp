#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a = 2;
    long long b = 3;
    long long c;

    for(int i = 1; i <= n-4; i++)
    {
        c = a+b;
        a = b % 1000000007;
        b = c % 1000000007;
        c %= 1000000007;
    }


    cout << c << " " << (n-2)%1000000007 ;
}