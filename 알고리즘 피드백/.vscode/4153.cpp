#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    while((a != 0) || (b != 0) || (c != 0))
    {
        if(a*a == b*b + c*c)
        {
            cout << "right\n";
        }
        else if(b*b == a*a + c*c)
        {
            cout << "right\n";
        }
        else if(c*c == a*a + b*b)
        {
            cout << "right\n";
        }
        else
        {
            cout << "wrong\n";
        }
        cin >> a >> b >> c;
    }

    return 0;
}