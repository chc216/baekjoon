#include <iostream>
#include <string>

using namespace std;

int main()
{
    int anwser = 1;
    string A, B;
    cin >> A;
    cin >> B;
    
    string word1, word2;

    for(int i = 0; i < A.size() * B.size(); i++)
    {
        word1 = word1 + A;
        word2 = word2 + B;
    }

    for(int i = 0; i < A.size() * B.size(); i++)
    {
        if(word1[i] != word2[i])
        {
            anwser = 0;
            break;
        }
    }

    cout << anwser;


}

