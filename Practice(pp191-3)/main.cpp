#include <stdio.h>

double centi_to_meter(double x);


int main()
{
	double res;

	res = centi_to_meter(187);
	printf("%.2lfm\n", res);

	return 0;
}
double centi_to_meter(double x)
{
	double result = 0;

	result = x / 100;

	return result;
}