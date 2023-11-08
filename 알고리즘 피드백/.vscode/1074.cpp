#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int divide(int row_1, int row_2, int col_1, int col_2, long long cnt, long long first_index, int direction, int r, int c)
{
    // cout << row_1 << " " << row_2 << " " << col_1 << " " << col_2 << " " << cnt << '\n';
    // cout << "count: "  << cnt <<'\n';
    // if(direction == 2 && cnt == 16)
    // {
    //     cout <<"----->" << row_1 << " " << row_2 << " " << col_1 << " " << col_2 << '\n';
    // }
    // if(direction == 1 && cnt == 4)
    // {
    //     cout <<"----->" << row_1 << " " << row_2 << " " << col_1 << " " << col_2 << '\n';
    // }
    if(cnt == 1)
    {
        return first_index;
    }
    else
    {
        if((row_1 <= r && r <= (row_1+row_2)/2) && (col_1 <= c && c <= (col_1+col_2)/2))
            return divide(row_1, (row_1+row_2)/2, col_1, (col_1+col_2)/2, cnt/4, 0*cnt/4 + first_index, 1, r, c); //제 1사분면
        if((row_1 <= r && r <= (row_1+row_2)/2) && ((col_1+col_2)/2+1 <= c && c <= col_2))
            return divide(row_1, (row_1+row_2)/2, (col_1+col_2)/2+1, col_2, cnt/4, 1*cnt/4 + first_index, 2, r, c);  //제 2사분면
        if(((row_1+row_2)/2+1 <= r && r <= row_2) && (col_1 <= c && c <= (col_1+col_2)/2))
            return divide((row_1+row_2)/2+1, row_2, col_1, (col_1+col_2)/2, cnt/4, 2*cnt/4 + first_index, 3, r, c);  //제 3사분면
        if(((row_1+row_2)/2+1 <= r && r <= row_2) && ((col_1+col_2)/2+1 <= c && c <= col_2))
            return divide((row_1+row_2)/2+1, row_2, (col_1+col_2)/2+1, col_2, cnt/4, 3*cnt/4 + first_index, 4, r, c);  //제 4사분면
    }
}

int main()
{
    int N, r, c;
    cin >> N >> r >> c;
    long long cnt = (long long)pow(2, N);

    
    cout << divide(0,cnt -1, 0, cnt -1, cnt*cnt, 0, 1, r, c);
    
    // for(int i = 0; i < cnt; i++)
    // {
    //     for(int j = 0; j < cnt; j++)
    //         cout << arr[i][j] << " ";
    //     cout << '\n';
    // }
    


    return 0;
}