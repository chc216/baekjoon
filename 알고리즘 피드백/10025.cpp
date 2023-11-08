#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int bukket[1000001];

int main()
{
    int N;
    cin >> N;
    
    int K;
    cin >> K;

    int x, g;
    for(int i = 0; i < N; i++)
    {
        cin >> g >> x;
        bukket[x] = g;
    }

    int max = 0;
    int sum = 0;

    int i = 0;
    int j = 0;

    if(2*K >= 1000000)
    {
        for(; i <= 1000000; i++)
        {
            sum += bukket[i];
        }

        cout << sum;
        return 0;
    }

    for(; i <= 2 * K;)
    {
        sum += bukket[i++];
    }
    max = sum;

    

    while(i <= 1000000)
    {
        sum += bukket[i++];
        sum -= bukket[j++];
        if(sum > max)
            max = sum;
    }

    cout << max;
    return 0;


}