#include <stdio.h>
#include <string.h>

void swap(const char *data, void *pa,void *pb);
int main()
{
	int age1, age2 = 0;
	double height1, height2 = 0.0;
	const char* ptype[2];
	ptype[0] = "int";
	ptype[1] = "double";
	printf("ù ��° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &age1, &height1);
	printf("�� ���� ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &age2, &height2);

	swap(ptype[0], &age1, &age2);
	swap(ptype[1], &height1, &height2);


	printf("ù��° ����� ���̿� Ű : %d, %.1lf\n", age1, height1);
	printf("�ι�° ����� ���̿� Ű : %d, %.1lf", age2, height2);

	return 0;
	
}
void swap(const char* data, void* pa, void* pb)
{
	int inttemp = 0;
	double doubletemp = 0.0;

	if (data == "int")
	{
		inttemp = *(int*)pa;
		*(int*)pa = *(int*)pb;
		*(int*)pb = inttemp;
	}
	else if (data == "double")
	{
		doubletemp = *(double*)pa;
		*(double*)pa = *(double*)pb;
		*(double*)pb = doubletemp;
	}
}