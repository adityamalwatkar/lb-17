#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];

    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i]>iMax)
        {
            iMax = Arr[i];
        }
    }

    return iMax;
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

    iRet = Maximum(p, iSize);

    printf("The maximum element is: %d\n", iRet);

    free(p);

    return 0;
}