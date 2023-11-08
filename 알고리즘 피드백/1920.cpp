//실버 4, 6/29, 수 찾기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> A;

    int tmp;
    for(int i = 0; i < N; i++)
    {
        cin >> tmp;
        A.push_back(tmp);
    }
    sort(A.begin(), A.end());

    int M;
    cin >> M;

    int mid, a, b;
    for(int i = 0; i < M; i++)
    {
        cin >> tmp;

        mid = (N-1)/2;
        a = 0;
        b = N-1;

        while(a <= b)
        {
            if(A[mid] == tmp)
            {
                cout << 1 << '\n';
                break;
            }
            else if(A[mid] < tmp)
            {
                a = mid + 1;
                mid = (a+b)/2;
            }
            else
            {
                b = mid - 1;
                mid = (a+b)/2;
            }
        }
        if(a > b)
            cout << 0 << '\n';

    }
    
}