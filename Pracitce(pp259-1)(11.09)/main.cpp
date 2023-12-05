#include <stdio.h>

int main()
{
	//1-1
	char str1[80] = { 'p','i','g' };// O
	//1-2
	char str2[] = "elephant";// O
	//1-3
	//char str3[5] = "apple";// X 문자열의 범위가 5보다 커야한다.
	char str3[6] = "apple";//문자열의 길이가 6이상 이여야 가능하다.
	//1-4
	//char str4[2] = { "sun","moon" };// X 첨자의 의미는 문자열의 갯수가 아닌 문자열의 크기이다.
	char str4[2][100] = { "sun","moon" };//첫번째 첨자는 문자열의 갯수 두번째 첨자는 문자열의 크기를 의미한다.


	return 0;

}