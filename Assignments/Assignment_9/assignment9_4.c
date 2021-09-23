/*
Input : 4
Output :# 1 * # 2 * # 3 * # 4 *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1; i<=iNo; i++)
    {
        printf("#\t%d\t*\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}