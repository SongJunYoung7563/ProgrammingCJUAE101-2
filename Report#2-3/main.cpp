#include <stdio.h>

int main()
{
	int integer = 0; /*������ �Է¹޽��ϴ�.*/
	int clap = 0;/*�ڼ��� ĥ Ƚ��*/
	int i = 0;

	printf("���ڸ� �Է��Ͻÿ�.\n");
	scanf_s("%d", &integer);

	for (i = 1; i <= (integer / 3); i++)/*3,6,9�� ��� ��� �ᱹ 3�ǹ���̴�.*/
	{
		clap += 1;/*3�ǹ���� �ѹ� ��ĥ �� ���� �ڼ� Ƚ���� 1�� �þ��.*/
	}
	printf("�ڼ��� %d�� �ľ��մϴ�.\n",clap);/*�ڼ� Ƚ���� �˷��ݴϴ�.*/

	return 0;
}