/*
Enter the number of rows: 5
Enter the number of column: 5
*       *       *       *       *
*       *                       *
*               *               *
*                       *       *
*       *       *       *       *

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i<=iRow; i++)
    {
        for(int j = 1; j<=iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("*\t");
            }
            else{
                printf("\t");
            }
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