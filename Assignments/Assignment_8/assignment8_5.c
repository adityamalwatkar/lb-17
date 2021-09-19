/*5.Write a program which accept accept range from user and display all numbers in between that range in reverse order.*/

#include<stdio.h>

void RangeDisplayRe(int iStart, int iEnd)
{
    for(int i = iEnd; i>= iStart; i--)
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

    RangeDisplayRe(iValue1, iValue2);

    return 0;
}
