#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;


    int n;
    int count_n = 0;

    while(T--)
    {
        cin >> n;
        int tmp;
        int count_arr[2] = {0, 0};

        int i = 0;
        while(i < n)
        {
        cin >> tmp;
        i++;
            
            count_arr[0] = 0;

            if(!tmp)
            {
                count_arr[0]++;
                while(!tmp && i < n)
                {
                    i++;
                    cin >> tmp;

                    if(!tmp)
                        count_arr[0]++;
                    else
                    {
                        break;
                    }
                }
                
            }
            if(count_arr[0] > count_arr[1])
                count_arr[1] = count_arr[0];


        }
        cout << count_arr[1] << '\n';
    }
    
    return 0;
}