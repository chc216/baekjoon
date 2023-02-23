#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        int length;
        char word[1000];
        scanf("%s", word);

        length = (int)strlen(word);

        printf("%c%c\n", word[0], word[length-1]);

    }

    return 0;
}