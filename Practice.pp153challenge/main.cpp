#include <stdio.h>

int main(void)
{
	int a = 0;
	char caculate = 0;
	int b = 0;
	int finish = 0;

	printf("사칙연산 입력(정수) : ");
	scanf_s("%d", &a);
	scanf_s("%c", &caculate);
	scanf_s("%d", &b);

	switch (caculate)
	{
	case '+':
		finish = a + b;
		break;
	case '-':
		finish = a - b;
		break;
	case '*':
		finish = a * b;
		break;
	case '/':
		finish = a / b;
		break;
	}

	printf("%d %c %d = %d\n", a, caculate, b, finish);

		return 0;
}