//LCS, 골드5, 다이나믹프로그래밍, divide and conqure, 메모리 최적화 버전

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

    int** arr = new int*[2];

    for(int i = 0; i < 2; i++)
    {
        arr[i] = new int[Asize]();
    }

    for(int i = 1; i < Bsize; i++)
    {
        const int index = i % 2;
        const int last_index = (i-1) % 2;

        for(int j = 1; j < Asize; j++)
        {
            if(b[i-1] == a[j-1]) //문자가 같으면
            {
                arr[index][j] = arr[last_index][j-1] + 1;
            }
            else
            {
                arr[index][j] = 
                        arr[last_index][j] > arr[index][j-1]
                        ? arr[last_index][j]
                        : arr[index][j-1];
            }
        }
    }
    cout << arr[b.size() % 2][Asize - 1];
    
}