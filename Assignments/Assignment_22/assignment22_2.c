/*. Write a program which accept string from user and count number of
small characters.
Input : “Marvellous”
Output : 9
*/

#include<stdio.h>

int CountSmall(char *brr)
{
	int iCount = 0;
	while(*brr != 0)
	{
		if((*brr >= 'a') && (*brr <= 'z'))
		{
			iCount++;
		}
		brr++;
	}
	
	return iCount;
}

int main()
{
	char Arr[20];
	int iRet = 0;

	printf("Enter the String..");
	scanf("%[^'\n']s", Arr);

	iRet = CountSmall(Arr);

	printf("The number of small charecters are: %d\n", iRet);

	return 0;
}