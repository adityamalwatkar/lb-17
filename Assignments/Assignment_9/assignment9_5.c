/*

input : 8
Output :2 4 6 8 1 0 1 2 14 16

*/

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1; i<=iNo; i++)
    {
        printf("%d\t", (i*2));
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