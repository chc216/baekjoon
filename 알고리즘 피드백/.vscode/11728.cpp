#include <iostream>
#include <algorithm>

using namespace std;

int A[1000000];
int B[1000000];
int anwser[2000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for(int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    int i = 0;
    int j = 0;
    int k = 0;
    while(i < N && j < M)
    {
        if(A[i] < B[j])
        {
            anwser[k++] = A[i++];
        }
        else
        {
            anwser[k++] = B[j++];
        }
    }

    if(i == N)
    {
        for(; j <= M; j++)
        {
            anwser[k++] = B[j];
        }
    }
    else if(j == M)
    {
        for(; i < N; i++)
        {
            anwser[k++] = A[i];
        }
    }

    for(i = 0; i < N+M; i++)
    {
        cout << anwser[i] << " ";
    }

    
    
    
}