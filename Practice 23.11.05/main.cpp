#include <stdio.h>
int main(void)
{
	int year = 0;
	int month = 0;
	int day = 0;
	int fortune = 0;

	printf("'출생년도'를 입력하시오(숫자만)\n");
	scanf_s("%d", &year);
	printf("'월'을 입력하시오.\n");
	scanf_s("%d", &month);
	printf_s("'일'을 입력하시오.\n");
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