#include <stdio.h>

int main(void)
{
	int age = 0;
	int chest = 0;
	char size = 0;

	printf("나이를 입력하시오.\n");
	scanf_s("%d", &age);

	printf("가슴둘레를 입력하시오\n");
	scanf_s("%d", &chest);

	if (age < 20)
	{
		if (chest < 85)
		{
			size = 'S';
		}
		else if (chest >= 85 && chest < 95)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	else
	{
		if (chest < 90)
		{
			size = 'S';
		}
		else if (chest >= 90 && chest < 100)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
		printf("당신의 옷의 사이즈는 %c입니다.\n", size);

		return 0;
	


}