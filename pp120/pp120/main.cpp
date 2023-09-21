#include <stdio.h>



int main(void)

{
	double weight = 0.0;
	double height = 0.0;
	
	
	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf_s("%lf%lf", &weight, &height);
	double bmi = ((weight) / ((height) / 100.0) * ((height) / 100.0));
	
	((bmi) >= 20) && ((bmi) < 25) ? printf("표준입니다.") : printf("체중관리가 필요합니다.");



		return 0;

}

