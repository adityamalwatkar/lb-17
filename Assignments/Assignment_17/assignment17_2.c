/*2. Accept N numbers from user and return difference between frequency of even number and odd numbers.*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iEven = 0, iOdd =0;
    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEven++;
        }
        if(Arr[i]%2 != 0)
        {
            iOdd++;
        }
    }
    return iEven-iOdd;
}

int main()
{
    int *p = NULL;
    int iRet = 0, iSize = 0;

    printf("Enter the size of Array:");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    printf("Enter %d elemets: ",iSize);

    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &p[i]);
    }

    iRet = Frequency(p, iSize);

    printf("Result is: %d\n", iRet);

    free(p);

    return 0;
}