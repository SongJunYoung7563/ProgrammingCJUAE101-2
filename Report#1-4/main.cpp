#include <stdio.h>

int main(void)
{

	int price = 0;
	int money = 0;
	int total = 0;
	int a, b, c = 0;

	printf("���ǰ��� �Է��Ͻÿ�.\n");
	scanf_s("%d", &price);
	printf("������ �ݾ��� �Է��Ͻÿ�.\n");
	scanf_s("%d", &money);

	total = money - price;

	a = total / 1000; /*1000���� ����*/
	b = (total % 1000) / 500; /*500���� ���� */
	c = (total % 1000) % 500 / 100; /*100���� ����*/

	if (total > 0)
	{
		printf("1000�� ����� %d�� �����ؾ��մϴ�.\n", a);
		printf("500�� ������ %d�� �����ؾ��մϴ�.\n", b);
		printf("100�� ������ %d�� �����ؾ��մϴ�.\n", c);
	}
	else /*���ǰ����� ������ �ݾ��� ���� ���*/
	{
		printf("���� �����մϴ�\n");
	}

	return 0;

}