#include <stdio.h>
#include <stdlib.h>

int bit_return(int a, int loc) // Bit returned at location
{
  int buf = a & 1<<loc;
        if (buf == 0)
                return 0;
        else
                return 1;
}
int main()
{
        float a = 0.0;
        void *b;
        b = &a;
        int i = 0;
        for (i = 31; i>=0; i--)
        {
                int j =0;
                printf("%d",bit_return(*((int*)b),i));
                j = 31 - i;
                switch(j){
                case 0:
                case 8:
                        printf(" ");
                }
        }
        printf("\n");
        return 0;
}