/*2.Write a program which accept number from user and return the count of odd
digits.*/

#include<stdio.h>

int CheakOdd(int iNo)
{
	int iDigit = 0, iCount = 0;

	if(iNo<0)
	{
		iNo = - iNo;
	}

	while(iNo>0)
	{
		iDigit = iNo % 10;
		if(iDigit %2 != 0)
		{
			iCount++;
		}
		iNo = iNo/10;
	}
	return iCount;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter the number: ");
	scanf("%d", &iValue);

	iRet = CheakOdd(iValue);

	printf("The count of odd digits from the given number is: %d\n", iRet);

	return 0;
}