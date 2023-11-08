//실버 4, 카드 2

#include <iostream>

using namespace std;

int queue[500000];
int front = 0;
int rear = 0;

int dequeue(int N)
{
    int tmp = queue[front++];
    front = front % N;
    return tmp;
}

void enqueue(int tmp,int N)
{
    rear = rear % N;
    queue[rear++] = tmp;
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
        queue[i] = i+1;
    
    rear = N;

    while((rear - front) != 1)
    {
        dequeue(N);
        enqueue(dequeue(N), N);
    }
    
    cout << dequeue(N);
    
    return 0;
}