/*2.Write a program which accept string from user and accept one
character. Return frequency of that character.*/

#include<stdio.h>

int CountChar(char *str, char c)
{
	int iCount = 0;
	
	while(*str != '\0')
	{
		if(*str == c)
		{
			iCount++;
		}
		str++;
	}
	return iCount;
}

int  main()
{
	char Arr[30];
	char ch;
	int iRet = 0;

	printf("Enter the string: ");
	scanf("%[^'\n']s", Arr);

	printf("Enter another charecter: ");
	scanf(" %c", &ch);

	iRet = CountChar(Arr, ch);

	printf("The frequency of %c in given string is: %d\n ", ch, iRet);

	return 0;
}