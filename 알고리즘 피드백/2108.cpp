//통계학, 실버3, 정렬, counting sort

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int count[8001] = {0};
    int N;

    cin >> N;

    int sum = 0;
    int tmp;
    vector <int> arr;
    arr.push_back(0);

    for(int i = 0; i < N; i++)
    {
        cin >> tmp;

        sum += tmp;

        arr.push_back(tmp);

        if(tmp < 0)
            count[(0-tmp) + 4000]++;
        else
            count[tmp]++;
    }

    sort(arr.begin(), arr.end());

    double result1 = (double)sum/N;
    cout << (int)round(sum/N) << '\n';
    cout << arr[N/2 + 1] << '\n';



    int max1 = 0, index1 = 0;
    int max2 = 0, index2 = 0;

    for(int i = 0; i < 8001; i++)
    {
        if((i <= 0) && (i <= 4000))
        {
            if(count[i] == 0)
                continue;


        }
        
        if(count[i] > max1)
        {
            max1 = count[i];

            if(i > 4000)
                i = 0 - (i - 4000);

            index1 = i;

            if((index1 < index2))
            {
                int index_tmp = index2;
                index2 = index1;
                index1 = index_tmp;
            }
        }
    }

    if(max1 == max2)
        cout << index1 << '\n';
    else
        cout << index2 << '\n';


    cout << "          " << index1 << " " << index2 << '\n';

}