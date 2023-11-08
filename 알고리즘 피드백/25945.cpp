#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000];

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int mid = sum/N;

    sort(arr, arr+N);

    for(int i = 0; i< N ; i++)
    {
        arr[i] -= mid;
    }
    
    for(int i = 0; i<N ;i++)
        cout << arr[i] << " " ;
    int r = 0;
    int p = N-1;
    int cnt = 0;

    while(arr[r++] < 0)
    {
        while(arr[r] < 0 && arr[p] >= 1)
        {
            arr[r]++;
            arr[p]--;
            cnt++;
        }
        p--;
    }

    cout << cnt;
    
}