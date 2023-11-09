#include <stdio.h>

int main()
{
	int n = 0;
	int x, y = 0;

	printf("도형의 크기를 입력하시오\n");/*도형 크기 입력받기*/
	scanf_s("%d", &n);

	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= n - x; y++)/*y가 n-x보다 작거나 같을 때 빈 공간 생성*/
		{
			printf(" ");/*빈공간이 n-x개 만큼 생김*/
		}
		for (y = 0; y < 2 * x + 1; y++)/*빈 공간을 만든 후 &을 2x+1개 만큼 생성*/
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}