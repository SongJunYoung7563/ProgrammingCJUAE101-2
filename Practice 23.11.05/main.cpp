#include <stdio.h>
int main(void)
{
	int year = 0;
	int month = 0;
	int day = 0;
	int fortune = 0;

	printf("'����⵵'�� �Է��Ͻÿ�(���ڸ�)\n");
	scanf_s("%d", &year);
	printf("'��'�� �Է��Ͻÿ�.\n");
	scanf_s("%d", &month);
	printf_s("'��'�� �Է��Ͻÿ�.\n");
	scanf_s("%d", &day);

	fortune = (year - month + day)% 10;

	if (fortune != 0)
	{
		printf("SoSo\n");
	}
	else
	{
		printf("Very Good\n");
	}

	return 0;
}