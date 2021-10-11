/*Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/
#include<stdio.h>

int getLength(char *brr)
{
	int iCnt = 0;
	while(*brr != '\0')
	{
		iCnt++;
		brr++;
	}
	return iCnt;
}
void prtReverse(char *brr, int iLength)
{
	for(int i = iLength-1; i>=0; i--)
	{
		printf("%c", brr[i]);
	}
	printf("\n");
}

int main()
{
	char Arr[20];
	int iSize = 0;

	printf("Enter the string: ");
	scanf("%[^'\n']s", Arr);

	iSize = getLength(Arr);

	prtReverse(Arr, iSize);

	return 0;
}