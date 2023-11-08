#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct sang
{
    int x;
    int y;
    int bang;
    int sum;
};

void swap(int * x, int * y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    pair<int, int> a[4][4];
    pair<int, int> xy[17];

    for(int y = 0; y < 4; y++)
    {
        for(int x = 0; x < 4; x++)
        {
            cin >> a[y][x].first;
            cin >>a[y][x].second;
            xy[a[y][x].first].first = x;
            xy[a[y][x].first].second = y;
        }
    }

    struct sang sang;
    sang.x = 1;
    sang.y = 1;
    sang.bang = a[0][0].second;
    sang.sum = a[0][0].first;


    int flag = 0;
    while(flag == 0)
    {
        for(int i = 1; i <= 16; i++)
        {
            if(xy[i].first == -1 && xy[i].second == -1)
            {
                continue;
            }
            int tmpx = xy[i].first;
            int tmpy = xy[i].second;
            int tmpbang = a[tmpy][tmpx].second;
            int k = 0, j = 0;
            switch (tmpbang)
            {
            case 1:
                k = -1; j = 0;
                break;
            case 2:
                k = -1; j = -1;
                break;
            case 3:
                k = 0; j = -1;
                break;
            case 4:
                k = 1; j = -1;
                break;
            case 5:
                k = 1; j = 0;
                break;
            case 6:
                k = 1; j = 1;
                break;
            case 7:
                k = 0; j = 1;
                break;
            case 8:
                k = -1; j = 1;
                break;
            
            default:
                break;
            }
            while((tmpx + j >= 4 && tmpx + j < 0) && (tmpy + k >= 4 && tmpy + k < 0) || (tmpx+j == sang.x && tmpy+k == sang.y ))
            {
                tmpbang++;
                switch (tmpbang)
                {
                case 1:
                    k = -1; j = 0;
                    break;
                case 2:
                    k = -1; j = -1;
                    break;
                case 3:
                    k = 0; j = -1;
                    break;
                case 4:
                    k = 1; j = -1;
                    break;
                case 5:
                    k = 1; j = 0;
                    break;
                case 6:
                    k = 1; j = 1;
                    break;
                case 7:
                    k = 0; j = 1;
                    break;
                case 8:
                    k = -1; j = 1;
                    break;
                
                default:
                    break;
                }
            }

                swap(&xy[i].first, &xy[a[tmpy + k][tmpx + j].first].first);
                swap(&xy[i].second, &xy[a[tmpy + k][tmpx + j].first].second);
                swap(&(a[tmpy][tmpx].first), &(a[tmpy + k][tmpx + j].first));
                swap(&(a[tmpy][tmpx].second), &(a[tmpy + k][tmpx + j].second));
        }
        int max = 0;   
        int max_x = sang.x;
        int max_y = sang.y;
        
        int y = sang.y, x = sang.x;

                switch (sang.bang)
                {
                case 1:
                    y += -1;
                    while(y >= 0)
                    {
                        if(a[y][x].first > max)
                        {
                            max = a[y][x].first;
                            max_x = x;
                            max_y = y;
                        }
                        y--;
                    }
                    break;
                case 2:
                    x += -1;
                    y += -1;
                    while(y >= 0 && x >= 0)
                    {
                        if(a[y][x].first > max)
                        {
                            max = a[y][x].first;
                            max_x = x;
                            max_y = y;
                        }
                        y--;
                        x--;
                    }
                    break;
                case 3:
                    x += -1;
                    y += 0;
                    while(y >= 0 && x >= 0 && x < 4 && y < 4)
                    {
                        if(a[y][x].first > max)
                        {
                            max = a[y][x].first;
                            max_x = x;
                            max_y = y;
                        }
                        x--;
                    }
                    break;
                case 4:
                    x += -1;
                    y += 1;
                    while(y >= 0 && x >= 0 && x < 4 && y < 4)
                    {
                        if(a[y][x].first > max)
                        {
                            max = a[y][x].first;
                            max_x = x;
                            max_y = y;
                        }
                        x--;
                        y++;
                    }
                    break;
                case 5:
                    x += 0;
                    y += 1;
                    while(y >= 0 && x >= 0 && x < 4 && y < 4)
                    {
                        if(a[y][x].first > max)
                        {
                            max = a[y][x].first;
                            max_x = x;
                            max_y = y;
                        }
                        y++;
                    }
                    
                    break;
                case 6:
                    x += 1;
                    y += 1;
                    while(y >= 0 && x >= 0 && x < 4 && y < 4)
                    {
                        if(a[y][x].first > max)
                        {
                            max = a[y][x].first;
                            max_x = x;
                            max_y = y;
                        }
                        x++;
                        y++;
                    }
                    break;
                case 7:
                    x += 1;
                    y += 0;
                    while(y >= 0 && x >= 0 && x < 4 && y < 4)
                    {
                        if(a[y][x].first > max)
                        {
                            max = a[y][x].first;
                            max_x = x;
                            max_y = y;
                        }
                        x++;
                    }
                    
                    break;
                case 8:
                    x += 1;
                    y += -1;
                    while(y >= 0 && x >= 0 && x < 4 && y < 4)
                    {
                        if(a[y][x].first > max)
                        {
                            max = a[y][x].first;
                            max_x = x;
                            max_y = y;
                        }
                        x++;
                        y--;
                    }
                    break;
                
                default:
                    break;
                }

                if(max == 0)
                    flag = 1;
                else
                {
                    sang.sum += max;
                    xy[a[max_y][max_x].first].first = 0;
                    a[max_y][max_x].first = -1;
                    sang.x = max_x;
                    sang.y = max_y;
                }
        
    }
    cout << sang.sum;
    
    
    return 0;
}