#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        string a;
        cin >> a;


        for(int j = 0; j < a.size(); j++)
        {
            if(a[j] == 0)
                continue;
            
            int k;

            for(k = j+1; k < a.size(); k++)
            {
                if(a[j] == a[k])
                    break;
            }

            if(k < a.size())
            {
                a[j] = 0;
                a[k] = 0;
            }
        }

        cout << "#" << i << " ";
        int flag = 0;
        char dic[101];
        int p = 0;
        for(int j = 0; j <a.size() ; j++)
        {
            if(a[j] != 0)
            {
                dic[p++] = a[j];
                flag = 1;
            }
        }

        if(flag == 0)
            cout << "Good";
        else
        {
            sort(dic, dic + p);
            for(int j = 0; j < p; j++)
            {
                cout << dic[j];
            }
        }
        cout << "\n";
    }
    return 0;
}