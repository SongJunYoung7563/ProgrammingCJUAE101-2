#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* big;
	int the_number_of = 0;
	double num = 0.0;
	double total = 0.0;
	big = (int*)malloc(sizeof(int));//���� ���� �Ҵ�
	if (big == NULL)
	{
		printf("�޸𸮰� �����մϴ�."); //�޸𸮰� ������ �� ���� ó��
		exit(1);
	}
	printf("������ ������ŭ �Ǽ��� �Է��ϼ���\n");
	printf("999�� �Է��ϸ� �����մϴ�.\n");
	while (1)
	{
		scanf("%lf", &num);
		if (num == 999)break;
		total += num;
		the_number_of += 1;
		big = (int*)realloc(big, the_number_of * sizeof(int));
	}
	printf("������ %.4lf �Դϴ�.", total);
	free(big);

	return 0;
}