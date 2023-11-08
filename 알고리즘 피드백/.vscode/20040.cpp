#include <iostream>
#include <algorithm>

using namespace std;

int arr[500001];

int findParent(int key)
{
    if(arr[key] == key)
        return key;
    else
        return arr[key] = findParent(arr[key]);
}

void unionSet(int a, int b)
{   
    if(a > b)
        arr[b] = a;
    else
        arr[a] = b;
}

int main()
{
    int cnt;
    int n;
    cin >> n >> cnt;

    for(int i = 0; i <= 500000; i++) //init
    {
        arr[i] = i;
    }

    int a, b;
    for(int i = 1; i <= cnt; i++)
    {
        cin >> a >> b;
        a = findParent(a);
        b = findParent(b);

        if(a == b)
        {
            cout << i;
            return 0;
        }
        else
        {
            unionSet(a, b);
        }
    }

    cout << 0;
    return 0;

}

