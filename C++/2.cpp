#include <iostream>
#include <string>

using namespace std;
//a:97 z:122 A:65
int main()
{
    string a;
    cin >> a;

    for(int i = 0; i<a.size(); i++)
    {
        if( 97 <= a[i] && a[i] <= 122)
        {
            a[i] -= 32;
        }
    }
    cout << a;

}
