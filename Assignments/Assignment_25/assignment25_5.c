/*5. Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).
Input :
“Marvellous Infosystems”
“Logic Building”
Output :
“Marvellous Infosystems Logic Building”*/


#include<stdio.h>

void StrCatX(char *src, char *dest)
{
	char *end = src;

	while(*end != '\0')
	{
		end++;
	}
	*end = ' ';
	end++;

	while(*dest != '\0')
	{
		*end = *dest;
		dest++;
		end++;
	}
	*dest = '\0';

}

int main()
{
	char Arr[50];
	char Brr[30];

	printf("Enter the String: ");
	scanf("%[^'\n']s", Arr);

	printf("Enter another String: ");
	scanf(" %[^'\n']s", Brr);

	StrCatX(Arr, Brr);

	printf("%s\n", Arr);

	return 0;
}