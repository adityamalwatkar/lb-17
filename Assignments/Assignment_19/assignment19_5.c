/*5. Accept N numbers from user and display summation of digits of each
number.*/

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    for(int i = 0; i<iLength; i++)
    {
        int iDig = 0, iTemp = Arr[i], iSum = 0;
        while(iTemp>0)
        {
            iDig = iTemp%10;
            iSum = iSum + iDig;
            iTemp = iTemp/10;
        }
        printf("%d\t", iSum);
    }
    printf("\n");
}

int main()
{
    int *p = NULL;
    int  iSize = 0;

    printf("Enter the size of array: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    printf("Enter %d elements: \n", iSize);

    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &p[i]);
    }

    DigitSum(p, iSize);

    free(p);

    return 0;
}