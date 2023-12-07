#include <stdio.h>
#include <string.h>
#define limit 5
int main()
{
	char word[16];
	char res_word[20];
	printf("단어 입력(15자로 제한함) : ");
	gets_s(word);
	if (strlen(word) <= limit)
	{
		strcpy(res_word, word);
	}
	else if (strlen(word) > limit)
	{
		strncpy(res_word, word, 5);
		res_word[5] = '\0';
		strncat(res_word, "**********", strlen(word) - limit);
		
	}
	printf("입력한 단어 : %s, 생략한 단어 : %s", word, res_word);

	return 0;
}