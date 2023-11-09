#include <stdio.h>

int main()
{
	int Num1, Num2 = 0;
	int a, b, c = 0;
	int GCD,LCM = 0;

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d%d", &Num1, &Num2); /*2개의 정수를 입력 받습니다.*/


	if (Num1 != Num2)/*Num1,Num2값이 같을 경우 계산 할 필요없이 각각의 값이 최대공약수가 됩니다.*/
	{
		a = Num1;
		b = Num2;

		if (a > b)/*a>b 일 때 유클리드 호제법 사용*/
		{
			while (a % b != 0)
			{
				c = b;
				b = (a % b);
				a = c;

			}
			GCD = b;
			printf("최대공약수는 %d입니다.\n", GCD);
		}
		else/*a<b 일 때 유클리드 호제법 사용*/
		{
			while (b % a != 0)
			{
				c = a;
				a = (b % a);
				b = c;
				
			}
			GCD = a;
			printf("최대공약수는 %d입니다.\n", GCD);
		}
	}
	else
	{
		GCD = Num2;
		printf("최대공약수는 %d입니다.\n", GCD);
	}

	LCM = ((Num1 * Num2) / GCD);/*최소공배수= 두 수의 곱 /최대공약수 */
	printf("최소공배수는 %d입니다.\n", LCM);

	return 0;
}