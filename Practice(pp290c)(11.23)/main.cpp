#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *pa,int size);

int main()
{
	int i = 0;
	double Num[10];
	int size = sizeof(Num) / sizeof(Num[0]);
	printf("실수값 10개 입력 : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%lf", &Num[i]);
		
	}
	
	line_up(Num,size);
	printf("정렬된 값 출력 : ");
	for (i = 0; i < 10; i++)
	{
		printf(" %.1lf", Num[i]);

	}
	return 0;
}
void swap(double *pa, double *pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}
void line_up(double *pa, int size)
{

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (*(pa + i) < *(pa + j))
			{
				swap(&pa[i], &pa[j]);
			}
		}
	}
}