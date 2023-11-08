#include <iostream>

using namespace std;

int main()
{

    int T;
    cin >> T;
    int i = 1;
    while(T--)
    {

    int a, b;
    bool flag = true;

    cin >> a >> b;

    if(a == 1 || b == 1)
    {
        if(a == 2)
        {
            cout << "#"<< i << " A\n";
        }
        if(b == 2)
        {
            cout << "#" << i << " B\n";
        }

        if(a == 3)
        {
            cout << "#"<< i<< " B\n";
        }
        if(b == 3)
        {
            cout << "#"<< i << " A\n";
        }
        i++;
        continue;
    }
    if(a == 2 || b == 2)
    {
        if(a == 3)
        {
            cout << "#"<< i << " A\n";
        }
        if(b == 3)
        {
            cout << "#"<< i << " B\n";
        }
        i++;
        continue;
    }
    }
}