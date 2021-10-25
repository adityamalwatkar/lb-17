/*1. Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”*/

#include<stdio.h>

void StrCpyRev(char * src, char *desc)
{
	char *start = src;
	char *end = src;

	while(*end != '\0')
	{
		end++;
	}
	end--;

	while(end >= start)
	{
		*desc = *end;
		desc++;
		end--;
	}
}

int main()
{
	char Arr[30];
	char Brr[30];

	printf("Enter the string: ");
	scanf("%[^'\n']s",Arr);

	StrCpyRev(Arr, Brr);	

	printf("%s\n", Brr);

	return 0;
}