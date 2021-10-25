/*1.Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *brr, char ch)
{
	while(*brr != '\0')
	{
		if(*brr == ch)
		{
			return true;
		}
		brr++;
	}

	return false;
}

int main()
{
	char Arr[20];
	bool bRet = false;
	char ch = '\0';

	printf("Enter the string: ");
	scanf("%[^'\n']s", Arr);

	printf("Enter another charecter: ");
	scanf(" %c", &ch);

	bRet = ChkVowels(Arr, ch);

	if(bRet == true)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}

	return 0;
}