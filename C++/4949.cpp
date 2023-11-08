#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    while(1)
    {
        string phrase;
        getline(cin, phrase);

        if(phrase == ".")         //종료 조건 검사
            break;

        int flag = 0;   //1이면 No출력
        stack<char> tmp;
        
        for(int i =0; i < phrase.length(); i++)
        {
            if(phrase[i] == '(' || phrase[i] == '[')    
            {
                tmp.push(phrase[i]);
            }
            else if( phrase[i] == ')')
            {
                if(!tmp.empty() && tmp.top() == '(')
                    tmp.pop();
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if(phrase[i] == ']')
            {
                if(!tmp.empty() && tmp.top() == '[')
                    tmp.pop();
                else
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(tmp.empty() && flag == 0)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
        
    }
}