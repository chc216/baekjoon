#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    scanf("%s", S);

    char *p;
    int idx;
    
    for(int i = 'a'; i<='z'; i++)
    {
        p = strchr(S, i);
        if(p == NULL)
        {
            printf("-1 ");
        }
        else
        {
            printf("%d ", (int)(p - S));
        }
    }

    return 0;
}