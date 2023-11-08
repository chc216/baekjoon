//좌표 정렬하기, 실버 5

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	int N;
	cin >> N;
	pair<int, int> dot[N];

	for(auto &i : dot)  //for범위문 사용
		cin >> i.first >> i.second;

	sort(dot, dot+N, less<pair<int, int> >() ); //알고리즘 내장함수 less<자료형>() 사용-> 오름차순 비교 함수(sort의 디폴트)

	for(auto i : dot)
	    cout << i.first << " " << i.second << '\n';

}