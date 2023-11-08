#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int count_arr[8001];

int main()
{

    int N;
    vector<int> arr;
    int tmp;

    int sum = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> tmp;
        sum += tmp;
        arr.push_back(tmp);
        count_arr[tmp+4000]++;
    }

    sort(arr.begin(), arr.end());

    int max_max;
    int max_second;

    max_max = 0;
    max_second = 0;

    for(int i = 8000; i >= 0; i--)
    {
        if(count_arr[max_max] <= count_arr[i])
        {
            max_second = max_max;

            max_max= i;
        }
    }

    int average = (int)round((float)sum/(float)N);
    cout << average << '\n';

    cout << arr[N/2] << '\n';

    if(count_arr[max_max] == count_arr[max_second])
        cout << max_second - 4000 << '\n';
    else
        cout << max_max - 4000 << '\n';

    cout << arr[N-1] - arr[0];
}