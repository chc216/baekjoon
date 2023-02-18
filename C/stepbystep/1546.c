#include <stdio.h>

int main(){
    int size, idx = 0;
    float max;
    float sum = 0;

    scanf("%d", &size);

    float arr[size];

    for(int i = 0; i<size; i++){
        scanf("%f", &arr[i]);
        if(arr[i] >= arr[idx])
            idx = i;
    }

    max = arr[idx];
    
    for(int i = 0; i<size; i++)
        sum += arr[i]/max * 100;
    

    printf("%f", sum/size);

}