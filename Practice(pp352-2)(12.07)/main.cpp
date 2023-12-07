#include <stdio.h>
#include <string.h>
int main()
{
	char str[80];
	strcpy(str, "wine");//str배열에 wine을 받는다.
	strcat(str, "apple");//strcat 함수로 받은 wine뒤에 apple을 붙여 wineapple을 만든다.
	strncpy(str, "pear", 1);//pear중 한글자 p만 복사하여 wineapple를 pineapple로 바꾼다.
	printf("%s,%d\n", str, strlen(str));
	return 0;
}