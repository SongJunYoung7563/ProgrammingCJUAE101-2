#include <stdio.h>

int main(void)

{
	int a = 0;
	int b = 0;
	int res = 0;

	printf("�� �� ���� ���ڸ� �Է��Ͻÿ�.\n");
	scanf_s("%d", &a);

	if (a < 1 || a > 12) 
	{
		printf("���� ������ ������ϴ�. ���α׷��� �����մϴ�.\n");  /*���� 3~5��, ������ 6~8�� ������ 9~10��, �ܿ��� 11��~2���Դϴ�.*/
	}
	else if (a <= 2 || a >= 11) 
	{ 
		printf("�ܿ��Դϴ�.\n"); 
	}
	else if (3 <= a && a <= 5) 
	{ 
		printf("���Դϴ�.\n"); 
	}
	else if (6 <= a && a <= 8) 
	{ 
		printf("�����Դϴ�.\n"); 
	}
	else  
		printf("�����Դϴ�.\n");


		return 0;

}