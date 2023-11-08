#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[500000];
int countNum[8001]; //규칙설정 : 원래 수에서 +4000한 숫자가 인덱스값!
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int sum = 0;
    int tmp;
    for(int i = 0; i < N; i++)
    {
        cin >> tmp;
        sum += tmp;
        countNum[tmp + 4000]++;
        arr[i] = tmp;
    }
    sort(arr, arr+N);

    int max_idx = 8000;
    int max_cnt = countNum[8000];

    int secondary_idx = 8000;
    int secondary_cnt = countNum[8000];

    for(int i = 8000; i >= 0; i--)
    {
        if(max_cnt <= countNum[i])
        {
            secondary_cnt = max_cnt;
            secondary_idx = max_idx;
            max_idx = i;
            max_cnt = countNum[i];
        }
    }


    int average = (int)round((double)sum/(double)N);

    cout << average << '\n';
    cout << arr[N/2] << '\n';
    if(max_cnt == secondary_cnt)
    {
        cout << secondary_idx - 4000 << '\n';
    }
    else
    {
        cout << max_idx - 4000 << '\n';
    }

    cout << arr[N-1] - arr[0] << '\n';
    


}