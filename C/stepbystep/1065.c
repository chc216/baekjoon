#include <stdio.h>
#define true 1
#define false 0

int hansoo(int i)
{
    int d = -1;
    int d1 = -1;



    if(i>=1000)
    {
        d = i/1000 - i%1000/100;
        d1 = i%1000/100 - i%100/10;
        if(d == d1 && d1 == (i%100/10 - i%10))
            {
                return true;
            }
        else return false;
    }
    else if(i >= 100)
    {
        d = i/100 - i%100/10;
        d1 = i%100/10 - i%10;
        if(d == d1)
        {
            return true;
        }
        else return false;
    }
    else return true;


}


int main(){
    int N;
    scanf("%d", &N);

    int count = 0;

    for(int i = 1; i <= N; i++)
    {
        if(hansoo(i) == true)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;

}