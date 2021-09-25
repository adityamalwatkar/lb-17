/*
Enter the number of Row: 4
Enter the number of column: 4
*       *       *       *
*       *       *       #
*       *       #       #
*       #       #       #

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i<=iRow; i++)
    {
        for(int j = 1; j<=iCol; j++)
        {
            if(i+j>iRow+1)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
           
        }
         printf("\n");
    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Row: ");
    scanf("%d", &iValue1);

    printf("Enter the number of column: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}