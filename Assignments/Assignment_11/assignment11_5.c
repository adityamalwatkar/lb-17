/*
Enter the number of rows: 4
Enter the number of columns: 4
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iRes = 1;

    for(int i = 1; i<=iRow; i++)
    {
        for(int j = 1; j<=iCol; j++)
        {
            printf("%d\t", iRes);
            iRes++;
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}