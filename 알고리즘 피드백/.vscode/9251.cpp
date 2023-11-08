//LCS, 골드5, 다이나믹프로그래밍, divide and conqure

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    const int Asize = a.size() + 1;
    const int Bsize = b.size() + 1;

    int** arr = new int*[Bsize];

    for(int i = 0; i < Bsize; i++)
    {
        arr[i] = new int[Asize]();
    }

    for(int i = 1; i < Bsize; i++)
    {
        for(int j = 1; j < Asize; j++)
        {
            if(b[i-1] == a[j-1]) //문자가 같으면
            {
                arr[i][j] = arr[i-1][j-1] + 1;
            }
            else
            {
                arr[i][j] = 
                        arr[i-1][j] > arr[i][j-1]
                        ? arr[i-1][j]
                        : arr[i][j-1];
            }
        }
    }

    cout << arr[Bsize - 1][Asize - 1];
    
}