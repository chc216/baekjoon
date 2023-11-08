//나이순 정렬
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void swap(pair<int, string> &a, pair<int, string> &b)
{
    pair<int, string> tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    
    int T;
    cin >> T;

    vector<pair<int, string> > person;
    
    for(int i =0; i < T; i ++)
    {
        pair<int, string> tmp;

        cin >> tmp.first;
        cin >> tmp.second;

        person.push_back(tmp);
    }
    
    for(int i = 1; i < T; i++)
    {
        for(int j = 0; j < T-i; j++)
        {
            if(person[j].first > person[j+1].first)
                swap(person[j], person[j+1]);
            else
                continue;
        }
    }


    for(int i =0; i < T; i ++)
    {
        cout << person[i].first << " " << person[i].second << '\n';
    }

}
