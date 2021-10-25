/*3.Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.*/

#include<stdio.h>

int FirstChar(char *str, char c)
{
	int iIndex = 0;
	while(*str != '\0')
	{
		if(*str == c)
		{
			break;
		}
		iIndex++;
		str++;
	}

	return iIndex++;
}

int main()
{
	char Arr[30];
	char ch = '\0';
	int iRet = 0;

	printf("Enter the string: ");
	scanf("%[^'\n']s", Arr);

	printf("Enter another charecter: \n");
	scanf(" %c", &ch);

	iRet = FirstChar(Arr, ch);

	printf("The Index of %c in given string: %d\n", ch, iRet);


	return 0;
}