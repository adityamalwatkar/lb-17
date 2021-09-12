/*5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.*/

#include<stdio.h>

int FactDiff(int iNo)
{
	int sum1 = 0;
	for(int iCnt = 1; iCnt<=(iNo/2); iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			sum1 = sum1 + iCnt;
		}
	}
	int sum2 = 0;

	for(int iCnt = 1; iCnt < iNo; iCnt++)
	{
		

		if(iNo % iCnt != 0)
		{
			sum2 = sum2 + iCnt;
		}
	}
	
	return sum1 - sum2;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number: ");
	scanf("%d", &iValue);

	iRet = FactDiff(iValue);

	printf("%d\n", iRet);

	return 0;
}