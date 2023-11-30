#include <stdio.h>

int main()
{
	int ary[5][6] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (j == 5)
			{
				for (int j = 0; j < 5; j++)
				{
					ary[i][5] += ary[i][j];
				}
			}
			else if (i == 4)
			{
				for (int i = 0; i < 4; i++)
				{
					ary[4][j] += ary[i][j];
				}
			}
			else if (i == 4 && j == 5)
			{
				for (int i = 0; i <= 3; i++)
				{
					for (int j = 0; j <= 4; j++)
					{
						ary[4][5] += ary[i][j];
					}
				}
			}
			printf("%5d", ary[i][j]);
			if (j == 5)
			{
				printf("\n");
			}
		}
	}
	
	
	return 0;
}