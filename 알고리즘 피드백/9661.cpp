//골드 2, 돌게임 7, DP or 게임이론 + 규칙 찾기

#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;


    switch(N%5)
    {
        case 0:
            cout << "CY";
            break;
        case 1:
            cout << "SK";
            break;
        case 2:
            cout << "CY";
            break;
        case 3:
            cout << "SK";
            break;
        case 4:
            cout << "SK";
            break;
    }
    return 0;
}