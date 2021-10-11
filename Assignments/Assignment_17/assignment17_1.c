/*1. Accept N numbers from user and return frequency of even numbers.

Enter the size of Array:6
Enter 6 elemets: 85
66
3
80
93
88
Result is: 3

*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCount = 0;
    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i] % 2 == 0)
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

    iRet = CountEven(p, iSize);

    printf("Result is: %d\n", iRet);

    free(p);

    return 0;
}