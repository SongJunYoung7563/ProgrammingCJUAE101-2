#include <stdio.h>

int main(void)
{

	int chest = 0;
	char size = 0;

	printf("�����ѷ��� �Է��Ͻÿ�.\n");
	scanf_s("%d", &chest);

	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest > 90 && chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("�� size�� %c �Դϴ�\n", size);

	return 0;
}