#include <stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;
}
int sub(int x, int y)
{
	int temp;

	temp = x - y;

	return temp;
}
int mul(int x, int y)
{
	int temp;

	temp = x * y;

	return temp;
}
int div(int x, int y)
{
	int temp;
	
	temp = x / y;

	return temp;
}

int main()
{
	int Num1 = 0;
	int Num2 = 0;
	char operation = 'a';

	printf("계산할 식을 입력하시오.(정수만 가능합니다.)\n");
	scanf_s("%d", &Num1);
	scanf_s("%c", &operation);
	scanf_s("%d", &Num2);

	int result = 0;

	switch (operation)
	{
	case '+':
		
		result = sum(Num1, Num2);
		break;
	case '-':
		
		result = sub(Num1, Num2);
		break;
	case '*':
		
		result = mul(Num1, Num2);
		break;
	case '/':
		
		result = mul(Num1, Num2);
		break;
	}

	printf("%d %c %d = %d", Num1, operation, Num2, result);

	return 0;
}