/*
Enter the number of rows: 4
Enter the number of columns: 3
A       B       C
A       B       C
A       B       C
A       B       C
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch = 'A';

    for(int i = 1; i<=iRow; i++)
    {
        for(int j = 0; j<iCol; j++)
        {
            printf("%c\t", ch + j);
            
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