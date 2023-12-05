#include <stdio.h>
#define The_number 12
void swap(int &a,int &b);
void ascending(int *n);
void descending(int* n);

int main()
{
	int Num[] = { 232,244,878,817,754,351,481,137,115,253,986,236 };
	int* pa = Num;

	ascending(pa);
	printf("오름차순으로 정렬 : ");
	for (int i = 0; i < The_number; i++)
	{
		printf("%5d", Num[i]);
	}
	printf("\n");
	descending(pa);
	printf("내림차순으로 정렬 : ");
	for (int i = 0; i < The_number; i++)
	{
		printf("%5d", Num[i]);
	}
	return 0;
}
void swap(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void ascending(int *n)
{
	
	for (int i = 0; i < The_number; i++)
	{
		for (int j = 0; j< The_number; j++)
		{
			if (*(n + j) > *(n + i))
			{
				swap(n[i], n[j]);
			}
		}
	}
}
void descending(int* n)
{
	for (int i = 0; i < The_number; i++)
	{
		for (int j = 0; j < The_number; j++)
		{
			if (*(n + j) < *(n + i))
			{
				swap(n[i], n[j]);
			}
		}
	}
}
