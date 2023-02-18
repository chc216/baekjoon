#include <stdio.h>

int d(int n)
{
    return n + n%10 + (n%100 - n%10)/10 + (n%1000 - n%100)/100 + n/1000;
}


int main(){
    printf("1\n");

    int n = 2;

    while(n <= 10000)
    {
        int i;
        for(i=1; i<=n-1; i++)
        {
            if(n == d(i))
                break;
        }
        if(i == n)
            printf("%d\n", n);

        n++;
    }
}