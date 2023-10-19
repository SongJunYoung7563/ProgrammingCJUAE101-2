#include <stdio.h>

int main(void)
{
	int number = 0;
	int times = 0;

	printf("2~9 까지의 숫자를 입력하시오\n");
	scanf_s("%d", &number);


	for (times = 1; times <= 19; times++)
	{
		printf("%d * %d = %d\n", number, times, number * times);
	}

	return 0;
}