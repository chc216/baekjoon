#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];

    for(int i =0; i < N; i ++)
    {
        cin >> arr[i];
    }

    int B, C;
    cin >> B >> C;

    int ppp = 0;
    

    for(int i = 0; i < N; i++)
    {
        int Bcount = 1, Ccount = 1;
        int sum = arr[i] - B;
        if(sum <= 0)
        {
            ppp += Bcount;
            continue;
        }
        while(sum > 0)
        {
            Ccount++;
            sum -= C;
        }
        ppp+=Ccount;
        }
    cout << ppp;
    }   
