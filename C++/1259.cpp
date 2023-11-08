#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main()
{

    while(1)
    {
        int n;
        cin >> n;

        if(n == 0)
            break;
        
        string num = to_string(n);

        bool flag = true;

        for(int i = 0; i < num.size()/2; i++)
        {
            if(num[i] != num[num.size() - i - 1])
                flag = false;
        }

        if(flag == true)
            cout << "yes\n";
        else
            cout << "no\n";
        
    }

    
}