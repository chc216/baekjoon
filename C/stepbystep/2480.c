#include <stdio.h>

int main(){
    int a,b,c;
    int prize = 0;

    scanf("%d %d %d", &a, &b, &c);

    if(a == b){
        if(b == c){
            prize = 10000 + a*1000;
        } // a=b=c
        else {
            prize = 1000 + a*100;
        }
    }
    else if(a==c || b==c){ 
        prize = 1000 + c*100;
    }
    else{
        if(a >= b && a>= c){
            prize = a*100;//a
        }
        else if(b >= c){
            prize = b*100;//b
        }
        else prize = c*100;    //c

    } // a,b,c모두 불일치

    printf("%d", prize);

}
