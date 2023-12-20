#include <stdio.h>
#include <math.h>

typedef struct {
	int x1, y1; //������ ��ǥ
	int a, b, c; //������ ������
}equation;
void formula(int a,int b,int c, int x,int y);
void vector(int a, int b, int c, int x, int y);
int main()
{
	double result = 0.0;
	equation unknown = {};
	equation* uk = &unknown;
	printf("������ ������ ��(a,b,c)�� �Է��Ͻÿ�.\n");
	scanf("%d%d%d%", &(uk->a), &(uk->b), &(uk->c));
	printf("������ �� ���� �Է��Ͻÿ�.\n");
	scanf("%d%d", &(uk->x1), &((*uk).y1));

	formula(uk->a, uk->b, uk->c, uk->x1, uk->y1);

	vector(uk->a, uk->b, uk->c, uk->x1, uk->y1);

	
	return 0;
}
void formula(int a, int b, int c, int x, int y)//����б� ���� ����
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
void vector(int a, int b, int c, int x, int y)//����
{
	double x2, y2 = 0.00;
	double temp;
	printf("������ ������ ���� �ִ� �� ���� �Է��Ͻÿ�.\n");
	while (1)
	{
		scanf("%lf %lf", &x2, &y2);
		if (a * x2 + b * y2 + c != 0)
		{
			printf("������ ���� �ִ� ���� �ƴմϴ�.\n�ٽ� �Է����ּ���\n");
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