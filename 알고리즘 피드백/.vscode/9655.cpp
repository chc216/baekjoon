//돌게임 1 , 실버 5, dp

#include <iostream>

using namespace std;

bool dp[1001];

int main()
{
    int N;
    cin >> N;

    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    

    for(int i = 4; i <= N; i++)
    {
        if(dp[i-1] && dp[i-3])
            dp[i] = false;
        else
            dp[i] = true;
    }
    
    if(dp[N] == true)
        cout << "SK";
    else
        cout << "CY";

}