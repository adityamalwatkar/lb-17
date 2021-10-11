#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[], int iLength)
{
    int eSum = 0, oSum = 0;

    for(int i = 0; i<iLength; i++)
    {
        if(arr[i]%2 == 0)
        {
            eSum = eSum + arr[i];
        }
        else{
            oSum = oSum + arr[i];
        }
    }

    return eSum-oSum;
}

int main()
{
    int *p = NULL;
    int size = 0, iRet = 0;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    p = (int *)malloc(sizeof(int)*size);

    if(p == NULL)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }
    printf("Enter %d elements: \n", size);

    for(int i = 0; i<size; i++)
    {
        printf("Enter elements %d: ", i+1);
        scanf("%d", &p[i]);
    }

    iRet = Difference(p, size);
    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}