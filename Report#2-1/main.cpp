#include <stdio.h>

int main()
{
	int Num1, Num2 = 0;
	int a, b, c = 0;
	int GCD,LCM = 0;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &Num1, &Num2); /*2���� ������ �Է� �޽��ϴ�.*/


	if (Num1 != Num2)/*Num1,Num2���� ���� ��� ��� �� �ʿ���� ������ ���� �ִ������� �˴ϴ�.*/
	{
		a = Num1;
		b = Num2;

		if (a > b)/*a>b �� �� ��Ŭ���� ȣ���� ���*/
		{
			while (a % b != 0)
			{
				c = b;
				b = (a % b);
				a = c;

			}
			GCD = b;
			printf("�ִ������� %d�Դϴ�.\n", GCD);
		}
		else/*a<b �� �� ��Ŭ���� ȣ���� ���*/
		{
			while (b % a != 0)
			{
				c = a;
				a = (b % a);
				b = c;
				
			}
			GCD = a;
			printf("�ִ������� %d�Դϴ�.\n", GCD);
		}
	}
	else
	{
		GCD = Num2;
		printf("�ִ������� %d�Դϴ�.\n", GCD);
	}

	LCM = ((Num1 * Num2) / GCD);/*�ּҰ����= �� ���� �� /�ִ����� */
	printf("�ּҰ������ %d�Դϴ�.\n", LCM);

	return 0;
}