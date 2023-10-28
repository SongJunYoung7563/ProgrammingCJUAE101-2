#include <stdio.h>

int main()
{
	int n = 0;/*입력 받을 크기*/
	int x, y = 0;/*계산할 정수 2개*/
	

	printf("도형의 크기를 입력하시오.\n");
	scanf_s("%d", &n);

	int OE = n / 2;/*홀수짝수 판별기*/
	if (n % 2 != 0)/*크기가 홀수 일 경우*/
	{
		for (x = 1; x < n - OE + 1; x++)/*마름모를 위 아래로 반씩 나누어 그린다.*/
		{
			for (y = OE + 1; y > x; y--)/*마름모의 왼쪽부분 위부터 빈공간을 남긴다.*/
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
	else if (n % 2 == 0)/*크기가 짝수 일 경우*/
	{
		for (x = 1; x < n - OE; x++)/*마름모를 위 아래로 반 씩 나누어 그린다.*/
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