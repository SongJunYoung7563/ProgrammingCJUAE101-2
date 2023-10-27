#include <stdio.h>

int main()
{
	int integer = 0; /*정수를 입력받습니다.*/
	int clap = 0;/*박수를 칠 횟수*/
	int i = 0;

	printf("숫자를 입력하시오.\n");
	scanf_s("%d", &integer);

	for (i = 1; i <= (integer / 3); i++)/*3,6,9의 배수 모두 결국 3의배수이다.*/
	{
		clap += 1;/*3의배수를 한번 거칠 때 마다 박수 횟수가 1씩 늘어난다.*/
	}
	printf("박수를 %d번 쳐야합니다.\n",clap);/*박수 횟수를 알려줍니다.*/

	return 0;
}