#include <stdio.h>

int main(void)
{
	int i, j = 0;

	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (i == 2 && j == 2 && i==j)
				{
					printf("*");
				}
			else if (i == j || i + j == 4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		
		
		printf("\n");
	}
return 0;
	}