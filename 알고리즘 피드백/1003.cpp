#include <iostream>
using namespace std;

int a[41];
int fibonacci(int n){
    if(n==0){
        a[0] = 0;
        return 0;
    }
    else if(n==1){
        a[1] = 1;
        return 1;
    }
    if(a[n] != 0)
        return a[n];
    else{
        a[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return a[n];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt;

    cin >> cnt;

    while(cnt--){
        int n;
        cin >> n;
        if(n==0){
            cout << "1 0" << '\n';
        }
        else if(n==1){
            cout << "0 1" << '\n';
        }
        else{
            fibonacci(n);
            cout << a[n-1] << ' ' << a[n] << '\n';
        }
    }
    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int one[41] = { 0,1 };   // 1이 출력된 갯수를 저장하는 배열 
int zero[41] = { 1,0 }; // 0이 출력된 갯수를 저장하는 배열 

int main(void)
{
   int t;      // t : 테스트 케이스의 수
   int* dp;   // dp : 동적 배열

   /* 입력 부분 */
   scanf("%d", &t);   // t를 입력받고 저장
   dp = (int*)malloc(sizeof(int) * t);   // t만큼 dp에 메모리 할당
   for (int i = 0; i < t; i++)
   {
      scanf("%d", &dp[i]);   // 테스트 케이스를 배열 dp에 저장
   }

   /* 알고리즘 부분 */
   for (int i = 2; i < 41; i++)
   {
      one[i] = one[i - 1] + one[i - 2];   // 1이 출력되는 갯수 계산
      zero[i] = zero[i - 1] + zero[i - 2]; // 0이 출력되는 갯수 계산
   }
   
   /* 출력 부분 */
   for (int i = 0; i < t; i++)
   {
      printf("%d %d\n", zero[dp[i]], one[dp[i]]);   // 결과값을 차례대로 출력
   }

   return 0;
}