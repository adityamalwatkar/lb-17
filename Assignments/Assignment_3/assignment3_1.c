/*1.Write a program which accept one number from user and print that number of
even numbers on screen.*/

#include<stdio.h>

void PrintEven(int iNo)
{
	if(iNo<=0)
	{
		return;
	}

	else
	{
		int i = 0;
		int n = 2;

		while(i != iNo)
		{
			if(n%2 == 0)
			{
				printf("%d\t",n);
				i++;

			}
			n++;
		}
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the number: ");
	scanf("%d", &iValue);

	PrintEven(iValue);

	return 0;
}