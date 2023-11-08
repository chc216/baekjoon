#include <iostream>
using namespace std;

int main()
{

    int a = 2;
    int b = 3;
    int c;

    int N;
    cin >> N;
    for(int i = 5; i <= N; i++)
    {
        c = (a + b) % 1000000007;
        a = b;
        b = c;
    }
    cout << c << " " << (N-2)%1000000007;
    
}