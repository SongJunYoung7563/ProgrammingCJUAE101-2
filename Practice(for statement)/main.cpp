#include <stdio.h>

int main()
{
	int a, b, c = 0;

	printf("5�ڸ��� DNA�� �Է��Ͻÿ� : ");
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
		printf("Suspect(������)\n");
	}
	else
	{
		printf("Citizen(�ù�)\n");
	}
	return 0;
}