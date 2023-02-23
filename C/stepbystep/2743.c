#include <stdio.h>
#include <string.h>

int main(){
    int length;
    char word[101];
    scanf("%s", word);

    length = (int)strlen(word);


    printf("%d", length);

    return 0;
}