#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    arr[5] = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        arr[i] *= arr[i];
        arr[5] += arr[i];
    }

    cout << arr[5] % 10;
    
}