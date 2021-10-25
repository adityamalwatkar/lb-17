/*5. Write a program which accept string from user reverse that string
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/

#include<stdio.h>

void StrRevX(char *str)
{
	char *end = str;
	char temp = '\0';

	while(*end != '\0')
	{
		end++;
	}
	end--;

	while(str < end)
	{
		temp = *str;
		*str = *end;
		*end = temp;

		str++;
		end--;
	}
}

int main()
{
	char Arr[20];


	printf("Enter the string: ");
	scanf("%[^'\n']s",Arr);

	StrRevX(Arr);

	printf("%s\n", Arr);

	return 0;
}