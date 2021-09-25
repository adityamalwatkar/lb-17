/*
Enter the number of rows: 4
Enter the number of columns: 4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch = 'A';
    char br = 'a';

    for(int i = 1; i<=iRow; i++)
    {
        for(int j = 0; j<iCol; j++)
        {
            if(i %2 != 0)
            {
                printf("%c\t", ch + j);
            }
            else{
                printf("%c\t", br + j);
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

    printf("Enter the number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}