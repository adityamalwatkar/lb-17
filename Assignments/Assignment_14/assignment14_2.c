/*
Enter the number of rows: 4
Enter the number of column: 4
*       *       *       *
*       *       *
*       *
*

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = iRow; i>=1; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of column: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);
    return 0; 
}