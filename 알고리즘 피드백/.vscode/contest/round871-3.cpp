#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;


    while(T--)
    {

        int n, m;
        string bin;

        long long bin11 = 200001;
        long long bin10 = 200001;
        long long bin01 = 200001;

        cin >> n;
        for(int i =0; i<n; i++)
        {
            cin >> m;
            cin >> bin;
            if(bin == "11")
            {
                if(m < bin11)
                    bin11 = m;
                
            }
            else if(bin == "01")
            {
                if(m < bin01)
                    bin01 = m;

            }
            else if(bin == "10")
            {
                if(m < bin10)
                    bin10 = m;
            }
            else
            {
                continue;
            }
        }

        // if((bin11 != 2000001) || ((bin10 != 200001) && (bin01 != 200001)))
        // {
        //     if(bin11 < (bin10+bin01))
        //         cout << bin11 << '\n';
        //     else
        //         cout << bin10+bin01 <<'\n';
        // }
        // else
        // {
        //     cout << -1 << '\n';
        // }

        if((bin11 == 200001) && ( (bin10 == 200001) || (bin01 == 200001) ))
        {
            cout << -1 << '\n';
        }    
        else
        {
            if((bin11 == 200001) && (200001 <= bin10 + bin01))
            {
                cout << bin10+bin01 << '\n';
            }
            else if(bin11 < (bin10 + bin01))
            {
                cout << bin11 <<'\n';
            }
            else if(bin11 >= (bin10 + bin01))
            {
                cout << bin10 + bin01 << '\n';
            }
        }
    }
    
    return 0;
}