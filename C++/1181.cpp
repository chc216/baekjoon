#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    vector< vector<string> > arr(51);

    
    for(int i = 0; i < T; i++)
    {
        string word;
        cin >> word;
        arr[word.size()].push_back(word);
    }

    for(int i = 1; i < 51; i++)
    {
        if(arr[i].empty())
            continue;

        sort(arr[i].begin(), arr[i].end());
        

        for(int j = 0; j < arr[i].size(); j++)
        {
    
            if(j+1 < arr[i].size() && arr[i].at(j) == arr[i].at(j+1) )   //다음 단어와 중복일 시 continue. j+1의 크기를 먼저 검사해준 이유는 j==arr[i].size()인 상태에선 인덱서 j+1 참조가 안되기 때문
                continue;

            cout << arr[i].at(j) << '\n';
        }
    }

}