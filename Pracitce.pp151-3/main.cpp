#include <stdio.h>

int main(void)
{
	int age = 0;
	int chest = 0;
	char size = 0;

	printf("���̸� �Է��Ͻÿ�.\n");
	scanf_s("%d", &age);

	printf("�����ѷ��� �Է��Ͻÿ�\n");
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
		printf("����� ���� ������� %c�Դϴ�.\n", size);

		return 0;
	


}