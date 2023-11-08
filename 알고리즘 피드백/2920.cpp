#include <iostream>

using namespace std;

int main()
{
    int arr[8];
    bool isAscending = true;
    bool isDescending = true;

    for(int i = 0; i < 8; i++)
    {
        cin >> arr[i];

    }

    for(int i = 0; i < 7; i++)
    {
        if(arr[i] < arr[i+1])
            isDescending = false;
    }

    for(int i = 0; i < 7; i++)
    {
        if(arr[i] > arr[i+1])
            isAscending = false;
    }

    if(!isAscending && !isDescending)
        cout << "mixed";
    else if(isAscending)
        cout << "ascending";
    else
        cout << "descending";

    return 0;

}