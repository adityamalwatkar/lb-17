/*1.Write a program which accept range from user and display all numbers in between that range.*/

#include<stdio.h>

void RangeDispla(int iStart, int iEnd)
{
    for(int i = iStart; i<= iEnd; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;


    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDispla(iValue1, iValue2);

    return 0;
}
