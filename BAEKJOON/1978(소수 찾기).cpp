/*
문제
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

입력
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

출력
주어진 수들 중 소수의 개수를 출력한다.
*/


#include <iostream>
using namespace std;
int main(void)
{
	int not_prime = 0, test, is_prime;
	cin >> test;
	
	for(int i = 0; i < test; ++i)
	{
		cin >> is_prime;
		if(is_prime == 1)
		{
			not_prime++;
		}
		else if(is_prime == 2)
		{
			
		}
		else
		{
			for(int j = 2; j <= is_prime/2; ++j)
			{
				if(!(is_prime % j))
				{
					//cout << is_prime << " is not prime\n";
					not_prime++;
					break;
				}
			}
		}
		
	}
	
	cout << test-not_prime << endl;
	return 0;
}