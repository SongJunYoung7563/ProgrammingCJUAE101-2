#include <stdio.h>
#include <math.h>

double fall(double s);

double fall(double s)/*�������� �ð��� ���ϴ� ����*/
{
	double t = 0.00;
	double g = 9.80;/*�߷� ���ӵ�*/
	t = sqrt(s / g);
	return t;
}
int main()
{
	double distance = 0.0;

	printf("���̰� �� �Դϱ�(������ m�Դϴ�.)?\n");
	scanf_s("%lf", &distance);

	double time = 0.0;
	time = fall(distance);

	printf("%.2lf�ʰ� �ɸ��ϴ�.\n",time);

	return 0;

}