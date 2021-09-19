/*1.Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)*/

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dRet = 0.0;
    dRet = PI * fRadius * fRadius;

    return dRet;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle having %f radius is: %.4f\n", fValue, dRet);
    
    return 0;
}