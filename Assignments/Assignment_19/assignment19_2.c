#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];

    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i]<iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMin;
}

int main()
{
    int *p = NULL;
    int iRet = 0, iSize = 0;

    printf("Enter the size of array: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    printf("Enter %d elements: \n", iSize);

    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &p[i]);
    }

    iRet = Minimum(p, iSize);

    printf("The Minimum element is: %d\n", iRet);

    free(p);

    return 0;
}