/*2.Write a program which accept number from user and display its factors in
decreasing order.*/

#include<stdio.h>

void FactRev(int iNo)
{

	for(int iCnt = (iNo/2); iCnt>0; iCnt--)
	{
		if(iNo % iCnt == 0)
		{
			printf("%d\t", iCnt);
		}
	}
	printf("\n");
}

int main()
{
	int iValue = 0;

	printf("Enter number: ");
	scanf("%d", &iValue);

	FactRev(iValue);

	return 0;
}