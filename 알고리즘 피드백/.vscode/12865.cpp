//평범한 배낭, 골드5, dp

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int ** arr = new int *[N+1];
    for(int i = 0; i <= N; i++)
    {
        arr[i] = new int[K+1]();
    }

    int tmp_w, tmp_v;
    for(int i = 1; i <= N; i++)
    {
        cin >> tmp_w >> tmp_v;
        
        if(tmp_w > K)
            continue;

        for(int j = 1; j < tmp_w; j++)
        {
            arr[i][j] = arr[i-1][j];
        }

        if(tmp_v > arr[i-1][tmp_w])
            arr[i][tmp_w] = tmp_v;
        else
            arr[i][tmp_w] = arr[i-1][tmp_w];

        for(int j = tmp_w + 1; j <= K; j++)
        {
            int only_one = arr[i-1][j];
            int with_tmp = arr[i-1][j-tmp_w] + tmp_v;

            if(only_one > with_tmp)
                arr[i][j] = only_one;
            else
                arr[i][j] = with_tmp;
        }
    }

    cout << arr[N][K];
}