#include <stdio.h>
#define SUB(a,b) ((a) - (b))

int main(void)
{
	double a = 0.0;
	double b = 180.0;
	double c = 360.0;
	double d = 0;
	int res = 0;

	printf("������ �Է��Ͻÿ�.\n");
	scanf_s("%lf", &a);
	
	res = ((int)a / (int)c); /*�Է��� ���� ������ ��ȯ�Ͽ� 360���� ���� �� �����մϴ�.*/
	d = (a > c) ? ((a)-res * (c)) - (b) : SUB(a, b); /*a��c���� Ŭ ��� a���� ������ ����c�� ���� ���ϴ�.a�� c���� �� �� a���� b�� ���ϴ�.*/
	printf("��ȯ�� ������ %.1lf�Դϴ�\n", d);
		
		return 0;

}