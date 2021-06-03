/*
문제
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다
*/


#include <iostream>
using namespace std;
bool check(int a)
{
	int fir,se,th;
	th = a%10;
	se = (a/10)%10;
	fir = (a/100)%10;
	if(a < 100)
	{
		return true;
	}
	else if(a >= 1000)
	{
		return false;
	}
	else if(2*se == th+fir)
	{
		return true;
	}
	else 
	{
		return false;
	}
		
	
}
int main(void)
{
	int input, count = 0;
	cin >> input;
	for(int i = 1; i <= input; ++i)
	{
		if(check(i))
		{
			count++;
		}
		
	}
	cout << count << endl;
	return 0;
}