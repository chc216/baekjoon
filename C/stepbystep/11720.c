#include <stdio.h>


int main(){
    int n, number, sum = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%1d", &number);
        sum += number;
    }
    printf("%d", sum);
    return 0;
}