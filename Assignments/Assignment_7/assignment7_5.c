/*5. Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)*/
#include<stdio.h>

double SquareMeter(int iNo)
{
    double dmeter = 0.0;
    dmeter = iNo * 0.0929;

    return dmeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("area in square meter: %.6f\n", dRet);

    return 0;
}