#include <stdio.h>

int main(void)

{
	int a = 0;
	int b = 0;
	int res = 0;

	printf("몇 월 인지 숫자만 입력하시오.\n");
	scanf_s("%d", &a);

	if (a < 1 || a > 12) 
	{
		printf("값이 범위를 벗어났습니다. 프로그램을 종료합니다.\n");  /*봄은 3~5월, 여름은 6~8월 가을은 9~10월, 겨울은 11월~2월입니다.*/
	}
	else if (a <= 2 || a >= 11) 
	{ 
		printf("겨울입니다.\n"); 
	}
	else if (3 <= a && a <= 5) 
	{ 
		printf("봄입니다.\n"); 
	}
	else if (6 <= a && a <= 8) 
	{ 
		printf("여름입니다.\n"); 
	}
	else  
		printf("가을입니다.\n");


		return 0;

}