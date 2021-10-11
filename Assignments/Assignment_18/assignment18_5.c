#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iMulti = 1;
    for(int i = 0; i<iLength; i++)
    {
       if(Arr[i] % 2 != 0)
       {
           iMulti = iMulti * Arr[i];
       }
    }

    return iMulti;
}

int main()
{
    int *p = NULL;
    int iRet = 0;
    int iSize = 0;

    printf("Enter the size of array: ");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the Elements: ");

    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &p[i]);
    }

    iRet = Product(p, iSize);

    printf("The product of odd elements is: %d\n", iRet);

    free(p);

    return 0;

}