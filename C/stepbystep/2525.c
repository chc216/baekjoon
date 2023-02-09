#include <stdio.h>

int main(){
    int inputh, inputm, inputneed;

    scanf("%d %d", &inputh, &inputm);
    scanf("%d", &inputneed);

    inputm += inputneed;

    if(inputm >= 60){
        inputh += inputm / 60;
        inputm %= 60;
    }

    if(inputh > 23) inputh -= 24;

    printf("%d %d", inputh, inputm);

    return 0;
}