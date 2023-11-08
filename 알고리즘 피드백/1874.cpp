//스택 수열, 실버 2
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int num_pointer = 1;    //숫자 1~n까지 미리 준비

    stack<int> arr;
    arr.push(-1);
    queue<char> answer;

    int tmp;
    bool flag = true;
    
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        while(tmp > arr.top())
        {
            arr.push(num_pointer++);
            answer.push('+');
        }

        if(tmp == arr.top())
        {
            arr.pop();
            answer.push('-');
        }
        else
        {
            cout << "NO";
            flag = false;
            break;
        }
    }

    if(flag == true)
    {   
        while(!answer.empty())
        {
            cout << answer.front() << '\n';
            answer.pop();
        }
    }

}
