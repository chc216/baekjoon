#include <stdio.h>

int main(){
    int number, target, count = 0;

    scanf("%d", &number);

    int arr[number];
    for(int i = 0; i<number; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for(int i = 0; i<number; i++){
        if(target == arr[i]){
            count++;
        }
    }
    printf("%d", count);

    return 0;
    
}