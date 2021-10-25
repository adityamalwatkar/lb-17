/*2. Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input :
“Marvellous Multi OS”
10
Output :
“Marvellous
*/

#include<stdio.h>

void StrCpyX(char *src, char *dest, int iCnt)
{
	int iLength = 0;

	while(*src != '\0')
	{
		iLength++;
	}

	if(iCnt > iLength)
	{
		while(*src != '\0')
		{
			*dest  =  *src;
			dest++;
			src++;
		}
	
	}

	else
	{
		while(*src != '\0' && iCnt != 0)
		{
			*dest  =  *src;
			dest++;
			src++;
			iCnt--;
		
		}
	}
}

int main()
{
	char Arr[20];
	char Brr[20];
	int iRange = 0;

	printf("Enter the String: ");
	scanf("%[^'\n']s", Arr);

	printf("Enter the number: ");
	scanf("%d", &iRange);

	StrCpyX(Arr, Brr, iRange);

	printf("%s\n", Brr);

	return 0;
}