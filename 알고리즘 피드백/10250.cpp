#include <iostream>

using namespace std;

int main()
{
    int T;
    int H, W, N;
    int Y, X;
    cin >> T;
    while(T--)
    {
        cin >> H >> W >> N;

        if( (N%H) == 0)
        {
            Y = H;
            X = N/H;
        }    
        else
        {
            Y = N%H;
            X = N / H + 1;
        }

        X < 10 ?
            cout << Y << 0 << X << '\n':
            cout << Y << X << '\n' ;
    }

    return 0;
}