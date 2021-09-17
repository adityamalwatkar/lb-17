#include<stdio.h>
#include<stdbool.h>

bool ZeroPresent(int iNo)
{
	int iDigit = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo!=0)
	{
		iDigit = iNo%10;
		if(iDigit == 0)
		{
			return true;
		}
		else
		{
			iNo = iNo/10;
		}
	}
	return false;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter the number: ");
	scanf("%d", &iValue);

	iRet = ZeroPresent(iValue);

	if(iRet == true)
	{
		printf("It contains zero\n");
	}
	else
	{
		printf("There is no zero\n");
	}

	return 0;
}