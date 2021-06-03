/*
문제
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
	int star;
	
	cin >> star;
	
	for(int i = star; i >= 1; --i)
	{
		for(int j = 0; j < star-i; ++j)
		{
			cout << " ";
		}
		for(int j = 0; j < 2*i-1; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for(int i = 2; i <= star; ++i)
	{
		for(int j = 0; j < star-i; ++j)
		{
			cout << " ";
		}
		for(int j = 0; j < 2*i-1; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}