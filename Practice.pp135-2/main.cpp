#include <stdio.h>

int main(void)
{

	int chest = 0;
	char size = 0;

	printf("가슴둘레를 입력하시오.\n");
	scanf_s("%d", &chest);

	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest > 90 && chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("옷 size는 %c 입니다\n", size);

	return 0;
}