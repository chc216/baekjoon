#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a = 0;
    long long b = 1;
    long long c;

    for(int i = 0; i<=n; i++)
    {
        if(i == 0)
            continue;
        if(i == 1)
            continue;
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
    }

    if(n == 0)
        c = 0;
    if(n == 1)
        c = 1;

    cout << c;
}