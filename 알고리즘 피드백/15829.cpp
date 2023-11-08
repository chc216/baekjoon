//Hashing , 브론즈 2 
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

long long hashing(int L, string arr)
{
    int c;
    unsigned long long tmp = 1ull;
    unsigned long long hash = 0ull;
    for(int i = 0; i < L; i++)
    {
        c = arr[i] - 'a' + 1;
        hash += (tmp * (unsigned long long)c);
        hash %= 1234567891ull;
        tmp *= 31ull;
        tmp %= 1234567891ull;
    }
    return hash;
}

int main()
{
    int L;
    string arr;
    cin >> L;
    cin >> arr;
    cout << hashing(L, arr);
    
}