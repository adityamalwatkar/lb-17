/*2. Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.*/



#include<stdio.h>

void StrCpyX(char * src, char *desc)
{
	while(*src != '\0')
	{
		if(*src == ' ')
		{
			*src = "";
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

	StrCpyX(Arr, Brr);	

	printf("%s\n", Brr);

	return 0;
}