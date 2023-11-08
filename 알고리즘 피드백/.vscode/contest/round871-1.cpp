#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    string arr;
    string code = "codeforces";
    int count_a;
    while(T--)
    {
        count_a = 0;
        cin >> arr;
        for(int i = 0; i < 10; i++)
        {
            if(arr[i] != code[i])
                count_a++;
        }
        cout << count_a << '\n';

    }
    
    return 0;
}