#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        int tmp;

        int even_sum = 0;
        int odd_sum = 0;
        vector<int> B;

        for(int i = 0; i < N; i++)
        {
            cin >> tmp;
            if((tmp % 2) == 0)
            {
                even_sum += tmp;
            }
            else
            {
                B.push_back(tmp);
            }
        }

        for(int i = 0; i < B.size(); i++)
        {
            odd_sum += B[i];
            // cout <<even_sum << " ====== " << odd_sum << '\n';

            if(even_sum <= odd_sum)
            {
                cout << "No" << '\n';
                break;
            }
            
        }

        if(even_sum > odd_sum)
        {
            cout << "Yes" <<'\n';
        }
        
        
    }

    return 0;
}

