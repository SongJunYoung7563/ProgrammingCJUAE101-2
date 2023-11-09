#include <stdio.h>
#include <math.h>

int main()
{
	int count = 0;/*반복문에 사용할 횟수*/
	int total = 0;/*총합*/
	double average = 0.00;/*평균*/
	double var1 = 0.00;/*분산을 구하기 위한 중간 과정*/
	double var2 = 0.00;/*분산*/
	double sdd = 0.00;/*표준편차*/
	int n = 0;/*받을 정수 10개*/

	printf("10개의 정수를 입력할 것입니다.\n정수를 1개씩 입력해주세요.\n");
	
	for (count = 1; count <= 10; count++)
	{
		printf("%d번째 정수를 입력하시오 :",count);
		scanf_s("%d", &n);
		total += n;/*10개의 n들의 합*/
		average = total / 10.0;/*평균 구하기*/
		var1 += ((n * n)/10.0);/*모든 정수의 제곱의 평균의 합*/
	}
	var2 = (var1 - (average * average));/*var1 - 평균의제곱*/
	sdd = sqrt(var2);
	
	printf("총합은 : %d\n분산은 : %.2lf\n표준편차는 : %.2lf", total,var2,sdd);
	return 0;
}