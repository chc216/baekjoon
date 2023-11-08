//돌게임 4 , 실버 2, dp, 게임이론

#include <iostream>
#include <algorithm>

using namespace std;

bool dp[1001];

int main()
{
    int N;
    cin >> N;

    dp[1] = false;
    dp[2] = true;
    dp[3] = false;
    dp[4] = true;
    

    for(int i = 5; i <= N; i++)
    {
        if(dp[i-1] && dp[i-3] && dp[i-4])
            dp[i] = false;
        else
            dp[i] = true;
    }
    
    if(dp[N] == true)
        cout << "SK";
    else
        cout << "CY";

}