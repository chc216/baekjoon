#include <iostream>
#include <algorithm>

using namespace std;
int arr[250001];

int main()
{
    int N, M, B;
    cin >> N >> M >> B;
    for(int i = 0; i < M*N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+N*M);
    int l = 0;
    int h = M*N-1;
    int high = 0;
    int time = 0;
    int lcnt;
    int hcnt;
    while(l != h)
    {
        l = 0;
        h = M*N -1;
        lcnt = 1;
        hcnt = 1;

        while(arr[l] == arr[l+1])
        {
            l++;
            lcnt++;
        }
    }

    
    return 0;
}