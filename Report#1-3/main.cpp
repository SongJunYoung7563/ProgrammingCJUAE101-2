#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("연도를 입력하시오.\n");
	scanf_s("%d", &a);

	if (a % 400 == 0) /*윤년은 4년에 한 번씩 찾아오며 4의배수의 특징을 갖고있다. 다만 100년에 한 번씩은 평년이 찾아온다. 2조건을 모두 만족할 때 400년에 한 번씩 윤년이 찾아온다.*/
	{
		printf("윤년입니다.\n");
	}
	else if (a % 100 == 0)
	{
		printf("평년입니다.\n");
	}
	else if (a % 4 == 0)
	{
		printf("윤년입니다.\n");
	}
	else
	{
		printf("평년입니다.\n");
	}

	return 0;

}