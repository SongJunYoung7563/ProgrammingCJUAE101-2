#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c = 0;
	int Num = 0;
	int* pn;
	printf("> ��� �Է� : ");
	scanf("%d", &Num);

	pn = (int*)malloc(sizeof(int));
	if (pn == NULL)
	{
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}
	if (Num >= 2)
	{
		pn = (int*)realloc(pn, Num * sizeof(int));
	}
	for (int number = 2; number <= Num; number++)
	{
		for (int division = 2; division <= number; division++)
		{
			if (number % division == 0)
			{
				if (number > division)
				{
					printf("     X");
					c++;
					if (c % 5 == 0)
					{
						printf("\n");
					}
					break;
				}
				else
				{
					printf("%5d", number);
					c++;
					if (c % 5 == 0)
					{
						printf("\n");
					}
				}
			}
			
		}
	}
	free(pn);

	return 0;
}