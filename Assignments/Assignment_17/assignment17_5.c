/*5.  Accept  N  numbers  from  user  and  accept  one  another  number  as  NO  , return frequency of NO form it.*/


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCount = 0;
    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i] == iNo)
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

    int No = 0;
    printf("Enter number to search: ");
    scanf("%d", &No);

    iRet = Frequency(p, iSize, No);

    printf("Result is: %d\n", iRet);

    free(p);

    return 0;
}