#include <stdio.h>

#define The_number_of_S 3.0
#define The_number_fo_student 5
typedef struct score
{
	int Class;
	char Name[20];
	int Kor;
	int Eng;
	int Math;
	int total;
	double average;
	char Rank;
};
char rank(double a);
void print_score(struct score *s);
void swap(score *a,score *b);
int main()
{
	struct score list[The_number_fo_student] = {};
	for (int i = 0; i < The_number_fo_student; i++)
	{
		printf("학번 : ");
		scanf("%d", &list[i].Class);
		printf("이름 : ");
		scanf("%s", list[i].Name);
		printf("국어,영어,수학 점수 : ");
		scanf("%d", &list[i].Kor);
		scanf("%d", &list[i].Eng);
		scanf("%d", &list[i].Math);
		list[i].total = list[i].Kor + list[i].Eng + list[i].Math;
		list[i].average = (double)list[i].total / The_number_of_S;
		list[i].Rank= rank(list[i].average);
	}
	printf("#정렬 전 데이터...\n");
	print_score(list);
	for (int i = 0; i < The_number_fo_student; i++)
	{
		for (int j = 0; j < The_number_fo_student; j++)
		{
			if (list[i].average > list[j].average)
			{
				swap(&list[i],&list[j]);
			}
		}
	}
	printf("#정렬 후 데이터...\n");
	print_score(list);
	return 0;
}
char rank(double a)
{
	char Rank;
	if (a >= 90 && a <= 100)
	{
		Rank = 'A';
		return Rank;
	}
	else if (a >= 80 && a <= 90)
	{
		Rank = 'B';
		return Rank;
	}
	else if (a >= 70 && a <= 80)
	{
		Rank = 'C';
		return Rank;
	}
	else
	{
		Rank = 'F';
		return Rank;
	}

}
void print_score(struct score* s)
{
	for (int i = 0; i < The_number_fo_student; i++)
	{
		printf("%5d %5s %5d %5d %5d %5d %.1lf %5c\n", (s + i)->Class, (s + i)->Name, (s + i)->Kor, (s + i)->Eng, (s + i)->Math, (s + i)->total, (s + i)->average, (s + i)->Rank);
	}
}
void swap(score *a,score *b)
{
	score temp;
	temp = *a;
	*a = *b;
	*b = temp;

}