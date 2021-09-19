/*3. Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)Input : 2330 Output : 212Input : 1018Output : 126Input : -102Piyush Khairnar - 7588945488 आ"ीTechnicalसं&ारकरतो !!!©Marvellous InfosystemsPage 2
*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    for(int i = iStart; i<= iEnd; i++)
    {
        iSum = iSum + i;
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

    iRet = RangeSum(iValue1, iValue2);

    printf("The addition of numbers in between the rane is: %d\n", iRet);

    return 0;
}
