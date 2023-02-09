#include <stdio.h>

int main(void){
    int T; //testcase
    int a,b;
    scanf("%d", &T);

    int i;
    for(i=0; i<T; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}