#include <stdio.h>
#include <string.h>

#define Max_Number 500
#define Cletter_MIn 65
#define Cletter_Max 90
int main()
{
	char sentence[Max_Number] = {};
	int i;
	int Change_Letter_Number = 0;
	printf("���� �Է� : ");
	gets_s(sentence);
	
	for (i = 0; i < Max_Number; i++)
	{
		
		if (sentence[i] >= Cletter_MIn && sentence[i]<= Cletter_Max)
		{
			Change_Letter_Number += 1;
			sentence[i] = sentence[i] + 32;
			if (sentence[i] == 0)
			{
				break;
			}
		}
	}
	printf("�ٲ� ���� : ");
	puts(sentence);
	printf("�ٲ� ���� �� : %d\n", Change_Letter_Number);
	
	return 0;
}
