#include <stdio.h>

int Fib(int x);

int Fib(int x)/*피보나치 수열 = 첫번째 항을 1로 두고 그 전 항과의 합을 수열로 나타낸 것*/
{
	if (x == 0)/*0번째 항은 존재하지는 않지만 0번째 항을 0으로 가정함*/
	{
		return 0;
	}
	else if (x == 1) /*첫번째 항을 1로 둔다.*/
	{
		return 1;

	}
	else/*그 전 항과 전전항의 합을 나타낸다.*/
	{
		return Fib(x - 1) + Fib(x - 2);
	}
}
int main()
{
	int integer = 0;
	int finish = 0;

	printf("피보나치 수열을 몇 번째 자리까지 구할까요?\n");
	scanf_s("%d", &integer);

	finish = Fib(integer);

	printf("%d", finish);

	return 0;
}