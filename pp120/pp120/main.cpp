#include <stdio.h>



int main(void)

{
	double weight = 0.0;
	double height = 0.0;
	double bmi = ((weight) / ((height) / 100.0) * ((height) / 100.0));
	
	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf_s("%lf%lf", &weight, &height);
	
	
	((bmi) >= 20) && ((bmi) < 25) ? printf("ǥ���Դϴ�.") : printf("ü�߰����� �ʿ��մϴ�.");



		return 0;

}

