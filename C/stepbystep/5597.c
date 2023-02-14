#include <stdio.h>

int main(){
    int arr[28];
    int cantscan[2] = {0,0};
    int cantscan_idx = 0;
    
    for(int i = 0; i<28; i++){
        scanf("%d", &arr[i]);
    }

    int number = 1;
    
    while(number <= 30)
    {
        for(int idx = 0; idx<28; idx++)
        {
            if(number == arr[idx]) break;
            if(idx == 27)
            {
                cantscan[cantscan_idx] = number;
                cantscan_idx++;
            }
        }
        number++;
    }

    if(cantscan[0] < cantscan[1])
    {
        printf("%d\n%d", cantscan[0], cantscan[1]);
    }
    else
    {
        printf("%d\n%d", cantscan[1], cantscan[0]);
    }

    return 0;
}