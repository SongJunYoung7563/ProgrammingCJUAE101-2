#include <stdio.h>

int main(void)
{

	int price = 0;
	int money = 0;
	int total = 0;
	int a, b, c = 0;

	printf("물건값을 입력하시오.\n");
	scanf_s("%d", &price);
	printf("투입한 금액을 입력하시오.\n");
	scanf_s("%d", &money);

	total = money - price;

	a = total / 1000; /*1000원의 개수*/
	b = (total % 1000) / 500; /*500원의 개수 */
	c = (total % 1000) % 500 / 100; /*100원의 개수*/

	if (total > 0)
	{
		printf("1000원 지폐는 %d개 지급해야합니다.\n", a);
		printf("500원 동전은 %d개 지급해야합니다.\n", b);
		printf("100원 동전은 %d개 지급해야합니다.\n", c);
	}
	else /*물건값보다 투입한 금액이 적을 경우*/
	{
		printf("돈이 부족합니다\n");
	}

	return 0;

}