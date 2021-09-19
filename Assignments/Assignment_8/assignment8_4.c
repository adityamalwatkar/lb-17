/*4.Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)*/
#include<stdio.h>

int RangeSumEve(int iStart, int iEnd)
{
    int iSum = 0;

    for(int i = iStart; i<= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;


    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

        if(iValue1 <0 || iValue2 < 0)
    {
        printf("Invalid range\n");
        return 0;

    }

    iRet = RangeSumEve(iValue1, iValue2);

    printf("The addition of even numbers in between the rane is: %d\n", iRet);

    return 0;
}
