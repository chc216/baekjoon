#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int K[10001] = {0};
    int N;
    cin >> N;

    int num;
    for(int i = 0; i < N; i++)
    {
        cin >> num;
        K[num]++;
    }

    for(int i = 1; i <= 10000; i++)
    {
        while(K[i] > 0)
        {
            cout << i << '\n';
            K[i]--;
        }
    }
}