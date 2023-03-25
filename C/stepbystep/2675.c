#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int R;
        int length;
        char S[20];

        scanf("%d %s", &R, S);
        length = (int)strlen(S);
        for(int j = 0; j < length; j++)
        {
            for(int q = 0; q < R; q++)
            {
                printf("%c", S[j]);
            }
        }
        printf("\n");
        
    }
    return 0;
}