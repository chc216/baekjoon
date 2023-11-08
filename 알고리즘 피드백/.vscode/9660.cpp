//돌게임 6 , 골드 5, dp, 게임이론

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    bool dp[7];
    bool result;

    dp[0] = false;
    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;
    dp[5] = true;
    dp[6] = true;
    
    result = dp[N%7];
    
    if(result)
        cout << "SK";
    else
        cout << "CY";
    
}