/*4. Accept N numbers from user and display all such numbers which contains
3 digits in it.*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    for(int i = 0; i<iLength; i++)
    {
        int iDig = 0, iTemp = Arr[i], iCount = 0;
        while(iTemp>0)
        {
            iDig = iTemp%10;
            iCount++;
            iTemp = iTemp/10;
        }
        if(iCount == 3)
        {
            printf("%d\t", Arr[i]);
        }
        
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

    Display(p, iSize);

    free(p);

    return 0;
}