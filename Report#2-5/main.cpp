#include <stdio.h>
#include <math.h>

int main()
{
	int count = 0;/*�ݺ����� ����� Ƚ��*/
	int total = 0;/*����*/
	double average = 0.00;/*���*/
	double var1 = 0.00;/*�л��� ���ϱ� ���� �߰� ����*/
	double var2 = 0.00;/*�л�*/
	double sdd = 0.00;/*ǥ������*/
	int n = 0;/*���� ���� 10��*/

	printf("10���� ������ �Է��� ���Դϴ�.\n������ 1���� �Է����ּ���.\n");
	
	for (count = 1; count <= 10; count++)
	{
		printf("%d��° ������ �Է��Ͻÿ� :",count);
		scanf_s("%d", &n);
		total += n;/*10���� n���� ��*/
		average = total / 10.0;/*��� ���ϱ�*/
		var1 += ((n * n)/10.0);/*��� ������ ������ ����� ��*/
	}
	var2 = (var1 - (average * average));/*var1 - ���������*/
	sdd = sqrt(var2);
	
	printf("������ : %d\n�л��� : %.2lf\nǥ�������� : %.2lf", total,var2,sdd);
	return 0;
}