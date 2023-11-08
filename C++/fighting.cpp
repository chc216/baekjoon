#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct n
{
    bool person;
    int negudo;
}dan;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    dan * ask = (dan *)malloc(sizeof(dan) * N);

    for(int i = 0; i < 2*N; i++)
    {
        cin >> ask[i].negudo;
    }


    int p= N - 1;
    int b = 0;  //타는 곳


    int count = 0;
    int act = 0;

    while(count != K)
    {

        p--;//포인터ㅓ 이동
        b--;

        if(p == 0)
            p = 2*N-1;  //회전하도록
        if(b <= 0)
            b = 2*N-1;

        if(!ask[b].person && ask[b].negudo > 0)
        {
            ask[b].person = true;
            ask[b].negudo--;
            if(ask[b].negudo == 0)
                count++;
        }

        if(ask[p].person)
        {
            ask[p].person = false;
        }

        for(int i = p; i > b; i--)
        {

            if(ask[i-1].person && ask[i].negudo != 0 && !ask[i].person)
            {
                ask[i].person = true;
                ask[i].negudo--;
                ask[i-1].person = false;

                if(ask[b].negudo == 0)
                    count++;
            }
        }
        act++;
    }
    cout << act;
}
