#include <stdio.h>


int main(){
    int arr[9];
    int max = 0, idx = -1;
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    idx = 0;

    for(int i = 0; i<9; i++)
    {
        if(max < arr[i])
        {
                max = arr[i];
                idx = i;
        }
    }

    printf("%d\n%d",max, idx+1);

    return 0;
}