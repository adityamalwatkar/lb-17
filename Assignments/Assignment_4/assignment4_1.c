/*1.Write a program which accept number from user and display its multiplication of
factors.*/

#include<stdio.h>

int MultFact(int iNo)
{
	int multi = 1;
	for(int iCnt = 1; iCnt<=(iNo/2); iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			multi = multi * iCnt;
		}
	}
	return multi;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number: ");
	scanf("%d", &iValue);

	iRet = MultFact(iValue);

	printf("%d\n", iRet);

	return 0;
}



/////////////////////////////////////
//
//
//
//skype iD:live:.cid.65f3c499c6e171ea
//
//
///////////////////////////////////////