#include <stdio.h>

int main()
{
	int n = 0;
	int x, y = 0;

	printf("������ ũ�⸦ �Է��Ͻÿ�\n");/*���� ũ�� �Է¹ޱ�*/
	scanf_s("%d", &n);

	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= n - x; y++)/*y�� n-x���� �۰ų� ���� �� �� ���� ����*/
		{
			printf(" ");/*������� n-x�� ��ŭ ����*/
		}
		for (y = 0; y < 2 * x + 1; y++)/*�� ������ ���� �� &�� 2x+1�� ��ŭ ����*/
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}