#include <stdio.h>

int Fib(int x);

int Fib(int x)/*�Ǻ���ġ ���� = ù��° ���� 1�� �ΰ� �� �� �װ��� ���� ������ ��Ÿ�� ��*/
{
	if (x == 0)/*0��° ���� ���������� ������ 0��° ���� 0���� ������*/
	{
		return 0;
	}
	else if (x == 1) /*ù��° ���� 1�� �д�.*/
	{
		return 1;

	}
	else/*�� �� �װ� �������� ���� ��Ÿ����.*/
	{
		return Fib(x - 1) + Fib(x - 2);
	}
}
int main()
{
	int integer = 0;
	int finish = 0;

	printf("�Ǻ���ġ ������ �� ��° �ڸ����� ���ұ��?\n");
	scanf_s("%d", &integer);

	finish = Fib(integer);

	printf("%d", finish);

	return 0;
}