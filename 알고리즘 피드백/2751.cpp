//수 정렬하기2, 실버5, merge sort 구현

#include <stdio.h>
#include <stdlib.h>

void Merge(int * arr, int start, int mid, int end);
void MergeSort(int* arr, int start, int end);

int main()
{
    int T;
    scanf("%d", &T);

    int *arr;
    arr = (int *)malloc(sizeof(int) * T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
    }
    MergeSort(arr, 0, T-1);

    for(int i = 0; i < T; i ++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;

}

void MergeSort(int *arr, int start, int end)
{
    int mid;

    if(end > start) //base case
    {
        mid = (start + end) / 2;

        MergeSort(arr, start, mid);
        MergeSort(arr, mid+1, end);

        Merge(arr, start, mid, end);
    }
}

void Merge(int *arr, int start, int mid, int end)
{
    int idx1 = start;
    int idx2 = mid + 1;
    int * tmp = (int *)malloc(sizeof(int) * (end - start + 1));
    int idx3 = 0;

    while(idx1 <= mid && idx2 <= end)
    {
        if(arr[idx1] <= arr[idx2])
            tmp[idx3] = arr[idx1 ++];
        else
            tmp[idx3] = arr[idx2++];

        idx3++;
    }

    if(idx1 > mid)
    {
        for(int i = idx2; i < end + 1; i++, idx3++)
            tmp[idx3] = arr[i];
    }
    else
    {
        for(int i = idx1; i < mid + 1; i++, idx3++)
            tmp[idx3] = arr[i];
    }

    for(int i = 0; i < idx3; i++)
        arr[start + i] = tmp[i];

    free(tmp);
}