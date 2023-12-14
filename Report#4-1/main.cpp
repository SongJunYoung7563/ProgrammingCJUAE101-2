#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* big;
	int the_number_of = 0;
	double num = 0.0;
	double total = 0.0;
	big = (int*)malloc(sizeof(int));//저장 공간 할당
	if (big == NULL)
	{
		printf("메모리가 부족합니다."); //메모리가 부족할 때 예외 처리
		exit(1);
	}
	printf("임의의 갯수만큼 실수를 입력하세요\n");
	printf("999를 입력하면 종료합니다.\n");
	while (1)
	{
		scanf("%lf", &num);
		if (num == 999)break;
		total += num;
		the_number_of += 1;
		big = (int*)realloc(big, the_number_of * sizeof(int));
	}
	printf("총합은 %.4lf 입니다.", total);
	free(big);

	return 0;
}