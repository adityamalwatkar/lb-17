/*5. Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2”*/

#include<stdio.h>

void StrCpyToggle(char *src, char *desc)
{
	while(*src != '\0')
	{
		if(*src >= 'A' && *src <= 'Z')
		{
			*src = *src + 32;
		}

		else if(*src >= 'a' && *src <= 'z')
		{
			*src = *src - 32;
		}

		*desc = *src;
		desc++;
		src++;
	}
}
 

int main()
{
	char Arr[30];
	char Brr[30];

	printf("Enter the string: ");
	scanf("%[^'\n']s", Arr);

	StrCpyToggle(Arr, Brr);

	printf("%s\n", Brr);

	return 0;
}