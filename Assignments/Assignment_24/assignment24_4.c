/*4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.*/

#include<stdio.h>

int LastChar(char *str, char c)
{
	char *end = str;
	int iCnt = 0;

	while(*end != '\0')
	{
		end++;
		iCnt++;
	}
	end--;

	while(end >= str)
	{
		if(*end == c)
		{
			break;
		}

		iCnt--;
		end--;
	}
	return iCnt;
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

	iRet = LastChar(Arr, ch);

	printf("The Index of %c in given string: %d\n", ch, iRet);


	return 0;
}