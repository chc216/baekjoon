//배열 합치기, 실버 5

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,M;
    cin >> N >> M;

    int A[N];
    int B[M];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    int a = 0, b = 0;
    int c = 0;
    int C[N+M + 1];
    for(;;)
    {
        if(a == N && b == M)
        {
            break;
        }
        else if(a == N)
        {
            for(int j = b; j < M; j++)
            {
                C[c++] = B[b++];
            }
        }
        else if(b == M)
        {
            for(int j = a; j < N; j++)
            {
                C[c++] = A[a++];
            }

        }
        else
        {
            if(A[a] < B[b])
            {
                C[c++] = A[a++];
            }
            else
            {
                C[c++] = B[b++];
            }
        }
    }

    for(int i = 0; i < N+M; i++)
    {
        cout << C[i] << " ";
    }
}