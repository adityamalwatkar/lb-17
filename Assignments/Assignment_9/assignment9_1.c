/*1. Accept number from user and display below pattern*/

#include<stdio.h>

void Pattern(int iNo)
{
    char iRet = '\0';

    for(int i = 0; i<iNo; i++)
    {
        iRet = i + 65;
        printf("%c\t", iRet);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}