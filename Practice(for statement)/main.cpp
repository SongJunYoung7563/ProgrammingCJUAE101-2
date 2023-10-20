#include <stdio.h>

int main()
{
	int a, b, c = 0;

	printf("5자리의 DNA를 입력하시오 : ");
	scanf_s("%d", &a);

	for (; ;)
	{
		b = a % 10;
		a = a / 10;
		c += b;
		if (a == 0)
		{
			break;
		}

	}
	if (c % 5 == 3)
	{
		printf("Suspect(용의자)\n");
	}
	else
	{
		printf("Citizen(시민)\n");
	}
	return 0;
}