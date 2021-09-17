/*4.Write a program which accept number from user and count frequency of 4 in it.*/
#include<stdio.h>

int CountFour(int iNo)
{
	int iDigit = 0, iCnt = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 4)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter the number: ");
	scanf("%d", &iValue);

	iRet = CountFour(iValue);

	printf("Count of four in the given number is: %d\n", iRet);

	return 0;
}