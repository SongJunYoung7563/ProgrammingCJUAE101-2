#include <stdio.h>
#include <string.h>
int main()
{
	char str[80];
	strcpy(str, "wine");//str�迭�� wine�� �޴´�.
	strcat(str, "apple");//strcat �Լ��� ���� wine�ڿ� apple�� �ٿ� wineapple�� �����.
	strncpy(str, "pear", 1);//pear�� �ѱ��� p�� �����Ͽ� wineapple�� pineapple�� �ٲ۴�.
	printf("%s,%d\n", str, strlen(str));
	return 0;
}