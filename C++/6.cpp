#include <iostream>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    long long sum = 1;

    if(x == 0 && y == 0)
    {
        cout << 1;
        return 0;
    }


    for(int i = 0; i < y; i++)
    {
        sum *= x;
 
    }
    if(sum >= 20091024)
    {
        sum %= 20091024;
    }
    cout << sum <<'\n';
}