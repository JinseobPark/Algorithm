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
	
	for(int i = 1; i <= star; ++i)
	{
		for(int j = 1; j <= i; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for(int k = star-1; k >= 1; --k)
	{
		for(int l = k; l >= 1; --l)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
	return 0;
}