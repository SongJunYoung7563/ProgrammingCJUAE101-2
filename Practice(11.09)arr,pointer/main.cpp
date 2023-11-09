#include <stdio.h>

#define Max_Number 10
int main()
{
	int nArrTest[Max_Number] = {};
	int *pArrTest = nArrTest;

	printf("pArrTest:%x\n", pArrTest);
	for (unsigned int i = 0; i < Max_Number; i++)
	{
		*(nArrTest + i) = Max_Number - i;
	}
	for (unsigned int i = 0; i < Max_Number; i++)
	{
		nArrTest[i] = i;
	}
	for (unsigned int i = 0; i < Max_Number; i++)
	{
		printf("nArrTest[%d] = %d\n", i, *(nArrTest+i));
	}
	for (unsigned int i = 0; i < Max_Number; i++)
	{
		printf("nArrTest[%d] = %x\n", i, &nArrTest[i]);
	}
	return 0;
}