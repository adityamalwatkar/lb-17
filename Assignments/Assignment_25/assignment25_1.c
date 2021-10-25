/*1.Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS”
*/

#include<stdio.h>

void StrCpyX(char *str1, char *str2)
{
	while(*str1 != '\0')
	{
		*str2  =  *str1;
		str2++;
		str1++;
		
	}
}

int main()
{
	char Arr[20];
	char Brr[20];

	printf("Enter the String: ");
	scanf("%[^'\n']s", Arr);

	StrCpyX(Arr, Brr);

	printf("%s\n", Brr);

	return 0;
}