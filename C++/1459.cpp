#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int w, s;
    cin >> x;
    cin >> y;
    cin >> w;
    cin >> s;

    unsigned long int t;

    if(x == 0 || y == 0)
    {
        t = (w * x) + (w * y);
        cout << t;
        return 0;   
    }


    if(x > y)
    {
        if(2*w < s)
            t = (2*w * y) + ( (x-y) * w );
        else
            t = (s * y) + ( (x-y) * w ); 
    }
    else if(x < y)
    {
        if(2*w < s)
            t = (2*w * x) + ( (y-x) * w );
        else
            t = (s * x) + ( (y-x) * w ); 
    }
    else
    {
        if(2*w < s)
            t = (2*w * x);
        else
            t = (s * x);
    }

    cout << t;
    return 0;

}

