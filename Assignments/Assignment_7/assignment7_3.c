/*3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMet = 0;
    iMet = iNo * 1000;

    return iMet; 
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("The distance in meter is : %d\n", iRet);

    return 0;
}