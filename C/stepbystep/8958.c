#include <stdio.h>

int main(){
//테스트 케이스 입력    

    int test;
    scanf("%d", &test);
    
   for(int testcase = 0; testcase < test; testcase++)
   {
//알고리즘
        char arr[81] = {0};
        scanf("%s", arr);

        int score = 0;
        int combo = 0;

        int i = 0;
        while(arr[i] != '\0')
        {
            if(arr[i] == 'O')
            {   
                combo++;
                score += combo;
            }
            else
            {
                combo = 0;
            }
            i++;
        }
        printf("%d\n", score);
    }
    return 0;
}