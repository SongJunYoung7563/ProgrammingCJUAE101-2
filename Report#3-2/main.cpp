#include <stdio.h>

int main()
{
	double Num[2][2] = {};
	double temp;
	double det;
	printf("4���� ���ڸ� �Է��ϼ���.");
	for (;;)
	{
		
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				scanf("%lf", &Num[i][j]);
			}
		}
		
		if (Num[0][0] * Num[1][1] - Num[0][1] * Num[1][0] == 0)
		{
			printf("������� ����� �� �����ϴ�.\n���ڸ� �ٽ� �Է� �޽��ϴ�.\n");
			printf("4���� ���ڸ� �Է��ϼ���.");
			continue;
		}
		else if (Num[0][0] * Num[1][1] - Num[0][1] * Num[1][0] != 0)
		{
			break;
		}
	}
	det = ((Num[0][0]) * (Num[1][1]) - (Num[0][1]) * (Num[1][0]));
	temp = Num[0][0];
	Num[0][0] = Num[1][1];
	Num[1][1] = temp;

	Num[0][0] =  Num[0][0] / det;
	Num[0][1] = Num[0][1]*(-1) /det;
	Num[1][0] = Num[1][0]*(-1)/det;
	Num[1][1] = Num[1][1]/det;

	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%5.2lf", Num[i][j]);
		}
	}
	return 0;
}
