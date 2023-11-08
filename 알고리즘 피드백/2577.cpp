#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int sum = a * b * c;
    int num;
    int count_arr[10] = {0};

    while(sum/10 != 0)
    {
        num = (sum % 10); //1의 자리 수만 추출
//        cout << char_num;
        count_arr[num]++;
        sum /= 10;
    }
    count_arr[sum]++;

    for(int i = 0; i < 10; i++)
    {
        cout << count_arr[i] << '\n' ;
    }

    return 0;

}