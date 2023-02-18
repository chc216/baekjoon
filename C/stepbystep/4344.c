#include <stdio.h>

int main(){

    int test;
    scanf("%d", &test);
    for(int testcase = 0; testcase < test; testcase++)
    {

        int N;
        scanf("%d", &N);
        int score[N];
        int sum = 0;
        int standard;

        for(int i = 0; i < N; i++)
        {
            scanf(" %d", &score[i]);
            sum += score[i];
        }

        standard = sum/N;

        float count = 0;
        for(int i = 0; i < N; i++)
        {
            if(score[i] > standard)
                count++;
        }

        printf("%.3f%c\n", count/N * 100, '%');
        
    }
    return 0;

}