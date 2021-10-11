/*4. Write a program which accept string from user and check whether
it contains vowels in it or not.*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *brr)
{
	while(*brr != '\0')
	{
		if(*brr == 'a'||*brr == 'e'||*brr == 'i'||*brr == 'o'||*brr == 'u')
		{
			return true;
		}

		if(*brr == 'A'||*brr == 'E'||*brr == 'I'||*brr == 'O'||*brr == 'U')
		{
			return true;
		}
		brr++;
	}
	return false;
}

int main()
{
	char Arr[20];
	bool bRet = false;

	printf("Enter the string: ");
	scanf("%[^'\n']s", Arr);

	bRet = ChkVowels(Arr);

	if(bRet == true)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}

	return 0;
}