#include <stdio.h>

int main()
{
	int i = 0;
	int total = 0;
	int N[10] = {};

	printf("���� 10���� �Է��Ͻÿ�.\n");
	for (i = 0; i<10; i++)
	{
		scanf_s("%d", &N[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		total += N[i];
		printf("%d", total);
	}
	return 0;
}