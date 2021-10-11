/*1.Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/

#include<stdio.h>

int CapitalCount(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s", Arr);

    iRet = CapitalCount(Arr);

    printf("Capital letters are : %d\n", iRet);

    return 0;
}