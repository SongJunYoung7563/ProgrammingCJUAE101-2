#include <stdio.h>

int main()
{
	int n = 0;/*�Է� ���� ũ��*/
	int x, y = 0;/*����� ���� 2��*/
	

	printf("������ ũ�⸦ �Է��Ͻÿ�.\n");
	scanf_s("%d", &n);

	int OE = n / 2;/*Ȧ��¦�� �Ǻ���*/
	if (n % 2 != 0)/*ũ�Ⱑ Ȧ�� �� ���*/
	{
		for (x = 1; x < n - OE + 1; x++)/*������ �� �Ʒ��� �ݾ� ������ �׸���.*/
		{
			for (y = OE + 1; y > x; y--)/*�������� ���ʺκ� ������ ������� �����.*/
			{
				printf(" ");
			}
			for (y = 0; y < 2 * x - 1; y++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (x = OE; 0 < x; x--)
		{
			for (y = OE + 1; y > x; y--)
			{
				printf(" ");
			}
			for (y = 0; y < 2 * x - 1; y++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if (n % 2 == 0)/*ũ�Ⱑ ¦�� �� ���*/
	{
		for (x = 1; x < n - OE; x++)/*������ �� �Ʒ��� �� �� ������ �׸���.*/
		{
			for (y = OE; y > x; y--)
			{
				printf(" ");
			}
			for (y = 0; y < 2 * x; y++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (x = OE; x > 0; x--)
		{
			for (y = OE; y > x; y--)
			{
				printf(" ");
			}
			for (y = 0; y < 2 * x; y++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}