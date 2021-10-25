/*3. Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.
Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”
*/

#include<stdio.h>

void StrCpyCap(char * src, char *desc)
{
	while(*src != '\0')
	{
		if(*src >= 'a' && *src <='z')
		{
			*src = *src - 32;
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

	StrCpyCap(Arr, Brr);	

	printf("%s\n", Brr);

	return 0;
}