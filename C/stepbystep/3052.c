#include <stdio.h>

int main(){
    int arr[10];
    int rest[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int tmp, idx_count = 0;

    for(int i = 0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        tmp = arr[i] % 42;

        for(int j = 0; j<10; j++)
        {
            if(tmp == rest[j])
            {
                break;
            }
            if(j == 9)
            {
                rest[idx_count] = tmp;
                idx_count++;
            }
        }
    }

    printf("%d", idx_count);
    return 0;

    
}