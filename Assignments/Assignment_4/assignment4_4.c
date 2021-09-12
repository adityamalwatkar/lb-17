/*4.Write a program which accept number from user and return summation of all its
non factors.*/

#include<stdio.h>

int SumNonFact(int iNo)
{
	int sum = 0;

	for(int iCnt = 1; iCnt < iNo; iCnt++)
	{
		

		if(iNo % iCnt != 0)
		{
			sum = sum + iCnt;
		}
	}
	
	return sum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number: ");
	scanf("%d", &iValue);

	iRet = SumNonFact(iValue);

	printf("%d\n", iRet);

	return 0;
}