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
	printf("문장 입력 : ");
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
	printf("바뀐 문장 : ");
	puts(sentence);
	printf("바뀐 문자 수 : %d\n", Change_Letter_Number);
	
	return 0;
}
