#include <stdio.h>
#include <math.h>

typedef struct {
	int x1, y1; //한점의 좌표
	int a, b, c; //직선의 방정식
}equation;
void formula(int a,int b,int c, int x,int y);
void vector(int a, int b, int c, int x, int y);
int main()
{
	double result = 0.0;
	equation unknown = {};
	equation* uk = &unknown;
	printf("직선의 방정식 값(a,b,c)을 입력하시오.\n");
	scanf("%d%d%d%", &(uk->a), &(uk->b), &(uk->c));
	printf("임의의 한 점을 입력하시오.\n");
	scanf("%d%d", &(uk->x1), &((*uk).y1));

	formula(uk->a, uk->b, uk->c, uk->x1, uk->y1);

	vector(uk->a, uk->b, uk->c, uk->x1, uk->y1);

	
	return 0;
}
void formula(int a, int b, int c, int x, int y)//고등학교 수학 공식
{
	double temp;
	temp = a * x + b * y + c;
	if (temp < 0)
	{
		temp = temp * -1;
	}
	temp = temp / sqrt(a * a + b * b);

	printf("%.2lf\n", temp);
}
void vector(int a, int b, int c, int x, int y)//벡터
{
	double x2, y2 = 0.00;
	double temp;
	printf("직선의 방정식 위에 있는 한 점을 입력하시오.\n");
	while (1)
	{
		scanf("%lf %lf", &x2, &y2);
		if (a * x2 + b * y2 + c != 0)
		{
			printf("방정식 위에 있는 점이 아닙니다.\n다시 입력해주세요\n");
			continue;
		}
		else
		{
			break;
		}
	}
	temp = a * (x - x2) + b * (y - y2);
	if (temp < 0)
	{
		temp = temp * -1;
	}
	temp = temp / sqrt(a * a + b * b);

	printf("%.2lf", temp);
}