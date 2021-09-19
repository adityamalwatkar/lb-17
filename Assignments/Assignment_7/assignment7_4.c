/*4. Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCel = 0.0;
    dCel = ((fTemp - 32)*5)/9;

    return dCel;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the tempreture in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Tempreture in celcius is: %.3f\n", dRet);


    return 0;
}