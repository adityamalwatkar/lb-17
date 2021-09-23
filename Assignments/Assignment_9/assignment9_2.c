/*2. Accept number from user and display below pattern

Input : 5
Output :5 # 4 # 3 # 2 # 1 #

*/

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = iNo; i>=1; i--)
    {
        printf("%d\t#\t",i);
    }
    printf("\n");
}

int main()
{   
    int ivalue = 0;

    printf("Enter the number: ");
    scanf("%d", &ivalue);

    Pattern(ivalue);

    return 0;
}