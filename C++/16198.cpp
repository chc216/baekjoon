#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> energy(N);
    for(int i = 0; i < N; i++)
        cin >> energy[i];

    int sum_weight = 0;

    while(energy.size() >= 3)
    {
        for(int i = 0; i < energy.size(); i++)
        {
            cout << energy[i] << " ";
        }
        cout << "\n";
        
        int max_weight = energy[0] * energy[2];

        vector<int> max_index_list;
        
        for(int i = 1; i < energy.size() -1 ; i++)
        {
            if(max_weight < (energy[i-1] * energy[i+1]) )
            {
                max_index_list.clear();
                max_index_list.push_back(i);
            }
            else if(max_weight == (energy[i-1] * energy[i+1]) ) 
            {
                max_index_list.push_back(i);
            }
        }

        if(max_index_list.size() == 1)
        {
            sum_weight += ( energy[max_index_list[0] - 1] * energy[max_index_list[0] + 1] );
            energy.erase(energy.begin() + max_index_list[0]);
            max_index_list.clear();
        }   
        else
        {
            int tmp_min_index = max_index_list[0];
            int tmp_min = energy[max_index_list[0]];

            /*for(int i = 0; i < max_index_list.size(); i++)
            {
                cout << max_index_list[i];
            }
            cout << "\n";*/

            for(int i = 0; i < max_index_list.size(); i++)
            {
                if(tmp_min > energy[max_index_list[i]])
                    tmp_min_index = max_index_list[i];
            }

            sum_weight += energy[tmp_min_index - 1] * energy[tmp_min_index + 1];
            energy.erase(energy.begin() + tmp_min_index);
            max_index_list.clear();
        }
    }

    cout << sum_weight;

}