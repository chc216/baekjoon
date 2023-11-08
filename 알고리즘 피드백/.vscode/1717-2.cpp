#include <iostream>

using namespace std;

int arr[1000001];

int findParent(int key)
{
    if(arr[key] == key)
        return key;
    else
    {
        return arr[key] = findParent(arr[key]);
    }
}

void unionTree(int a, int b)
{
    a = findParent(a);
    b = findParent(b);
    if(a > b)
        arr[b] = a;
    else
        arr[a] = b;
        
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    for(int i = 0; i <= N; i++)
    {
        arr[i] = i;
    }

    int M;
    cin >> M;

    int operation, a, b;
    while(M--)
    {
        cin >> operation >> a >> b;
        if(operation == 0)
        {
            unionTree(a, b);
        }
        else
        {
            a = findParent(a);
            b = findParent(b);
            if(a == b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}