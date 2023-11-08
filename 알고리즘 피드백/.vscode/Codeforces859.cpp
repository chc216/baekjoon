#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    int T;

    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;

        if((a + b) == c)
        {
            cout << '+' << '\n';
        }
        else
        {
            cout << '-' << '\n';
        }
    }

    return 0;
}