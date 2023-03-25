#include <stdio.h>

int main()
{
    int a,b;
    int tmp = 0;
    scanf("%d %d", &a, &b);

    //숫자 돌리기
    tmp = 100 * (a%10) + (a%100 - a%10) + a/100;
    a = tmp;

    tmp = 100 * (b%10) + (b%100 - b%10) + b/100;
    b= tmp;

    if(a > b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }

    return 0;
}