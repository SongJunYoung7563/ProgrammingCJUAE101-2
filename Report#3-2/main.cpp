#include <stdio.h>

int main()
{
	double Num[2][2] = {};
	double temp;
	double det;
	printf("4개의 숫자를 입력하세요.");
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
			printf("역행렬을 계산할 수 없습니다.\n숫자를 다시 입력 받습니다.\n");
			printf("4개의 숫자를 입력하세요.");
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
