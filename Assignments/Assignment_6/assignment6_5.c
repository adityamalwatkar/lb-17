/*5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iMult = 1;
    int iEven = 0, iOdd = 0;
    
    if(iNo<0)
    {
        iNo = - iNo;
    }
    
    while (iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo/10;

    }
  return iEven - iOdd;  
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("The Difference is: %d\n", iRet);

    return 0;
}