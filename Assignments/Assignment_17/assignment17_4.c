/*4. Accept N numbers from user and return frequency of 11 form it.*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCount = 0;
    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i] == 11)
        {
            iCount++;
        }
    }
    return iCount;
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