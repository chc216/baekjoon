#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n+1];
    for(int i = 0; i <= n; i++)
    {
        arr[i] = i;
    }

    int operation;
    int a, b;
    int max, min;
    while(m--)
    {
        cin >> operation;
        if(operation == 0)
        {
            cin >> a >> b;
            if(arr[a] != arr[b])
            {

                for(int i = 0; i <= n; i++)
                {
                    
                }
            }
            else
            {
                continue;
            }

            for(int i = 0; i <= n; i++ )
                cout <<" " << arr[i] ;
            cout << '\n';
        }
        else if(operation == 1)
        {
            continue;
        }
    }
}