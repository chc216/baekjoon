#include <stdio.h>

int main(){
    int number, std;

    scanf("%d %d", &number, &std);

    int arr[number];

    for(int i = 0; i<number; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<number; i++){
        if(std > arr[i]){
            printf("%d ", arr[i]);
        }
    }

    return 0;
    
}