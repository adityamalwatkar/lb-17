//4. Accept one number and check whether is is divisible by 5 or not.

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Cheak(int iNo)
{
	if((iNo % 5) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;

	printf("Enter number\n");
	scanf("%d", &iValue);

	bRet = Cheak(iValue);
	
	if(bRet == TRUE)
	{
		printf("Divisible by 5\n");
	}
	else
	{
		printf("Not Divisible by 5\n");
	}

	return 0;
}