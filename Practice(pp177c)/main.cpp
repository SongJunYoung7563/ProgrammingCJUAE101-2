#include <stdio.h>

int main()
{
	int number = 0;
	int division = 0;
	int c = 0;
	int integer = 0;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf_s("%d", &integer);

	for (number = 2; number <= integer; number++)
	{
		for (division = 2; division <= number; division++)
		{
			if (number % division == 0)
			{
				if (number > division)
				{
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

	return 0;
}