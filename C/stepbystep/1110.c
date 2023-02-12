#include <stdio.h>

int main(){
    int N, c, new=-1;
    int cycle =0;
    int target;
    scanf("%d", &target);

    N = target;

    while(target != new){

        c = N/10 + N%10;

        new = N%10 * 10 + c%10;

        N = new;

        cycle++;
    }

    printf("%d", cycle);

    return 0;
}