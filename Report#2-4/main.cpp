#include <stdio.h>
#include <math.h>

double fall(double s);

double fall(double s)/*떨어지는 시간을 구하는 공식*/
{
	double t = 0.00;
	double g = 9.80;/*중력 가속도*/
	t = sqrt(s / g);
	return t;
}
int main()
{
	double distance = 0.0;

	printf("높이가 몇 입니까(단위는 m입니다.)?\n");
	scanf_s("%lf", &distance);

	double time = 0.0;
	time = fall(distance);

	printf("%.2lf초가 걸립니다.\n",time);

	return 0;

}