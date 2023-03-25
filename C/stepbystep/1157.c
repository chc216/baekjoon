#include <stdio.h>
#include <string.h>
//A : 65
//a - A = 32
int main()
{
    int length = 0;
    int max1st = 0, max2nd = 0;
    int count = 0;
    char max1, max2;
    char S[1000000];
    
    scanf("%s", S);

    length = (int)strlen(S);

    for(int alpha = 65; alpha < 65 + 26; alpha++)
    {
        count = 0;
        for(int i = 0; i< length; i++)
        {
            if(S[i] == alpha || S[i] == alpha + 32)
            {
                count++;
            }
        }

        if(max1st <= count)
        {
            max2nd = max1st;
            max1st = count;
            max2 = max1;
            max1 = alpha;
        }
    }

    if(max1st == max2nd)
    {
        printf("?");
    }
    else
    {
        printf("%c", max1);
    }
    return 0;
}