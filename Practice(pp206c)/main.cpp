#include <stdio.h>

int rec_func(int n);

int rec_func(int n)
{
	int result = 0;
	if (n <= 1) return n;
	else return n + rec_func(n - 1);
	
	
	
	
}
int main()
{
	int integer = 0;
	int total = 0;
	printf("1부터 입력한 수까지의 합을 구합니다.");
	scanf_s("%d", &integer);

	total = rec_func(integer);
	printf("%d\n", total);

	return 0;
}