#include <stdio.h>

int main(){
    int N, max, mini;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0 ; i<N; i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    mini = arr[0];

    for(int i = 1; i<N; i++){
        if(max < arr[i]) max = arr[i];
        if(mini > arr[i]) mini = arr[i];
    }

    printf("%d %d", mini, max);

    return 0;
}