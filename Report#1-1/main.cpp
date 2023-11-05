#include <stdio.h>
#define SUB(a,b) ((a) - (b))

int main(void)
{
	double a = 0.0;
	double b = 180.0;
	double c = 360.0;
	double d = 0;
	int res = 0;

	printf("각도를 입력하시오.\n");
	scanf_s("%lf", &a);
	
	res = ((int)a / (int)c); /*입력한 값을 정수로 변환하여 360으로 나눈 후 저장합니다.*/
	d = (a > c) ? ((a)-res * (c)) - (b) : SUB(a, b); /*a가c보다 클 경우 a에서 저장한 값과c의 곱을 뺍니다.a가 c이하 일 때 a에서 b를 뺍니다.*/
	printf("변환된 각도는 %.1lf입니다\n", d);
		
		return 0;

}