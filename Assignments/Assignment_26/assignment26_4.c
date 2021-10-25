/*
4. Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.
Input : “Marvellous Python 2”
Output : “marvellous python 2”
*/

#include<stdio.h>

void StrCpySmall(char * src, char *desc)
{
	while(*src != '\0')
	{
		if(*src >= 'A' && *src <='Z')
		{
			*src = *src + 32;
		}
		*desc = *src;
		src++;
		desc++; 
	}
}

int main()
{
	char Arr[30];
	char Brr[30];

	printf("Enter the string: ");
	scanf("%[^'\n']s",Arr);

	StrCpySmall(Arr, Brr);	

	printf("%s\n", Brr);

	return 0;
}