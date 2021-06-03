/*
문제
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

출력
한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
*/

#include <iostream>
 using namespace std; 
 const int MAX = 1000000; 
 void eratos(bool arr[MAX + 1]) 
 {
	arr[0] = arr[1] = true; 
	for (int i = 2; i < MAX / 2 + 1; i++) 
	{ 
		if (!arr[i]) 
		{ 
			for (int j = i * 2; j <= MAX; j += i) 
				arr[j] = true; 
		} 
	} 

} 
int main() { 
	bool prime[MAX + 1] = {};
	eratos(prime); 
	int to, des; 
	cin >> to >> des;
	for (int i = to; i <= des; i++) 
		if (!prime[i]) 
			cout << i << '\n'; 
	return 0; 
}