/*1.  Accept  N  numbers  from  user  and  accept  one  another  number  as  NO  , check whether NO is present or not.*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Cheak(int Arr[], int iLength, int iNo)
{
    bool bAns = false;
    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            bAns = true;
        }
    }

    return bAns;
}

int main()
{
    int *p = NULL;
    bool bRet = false;
    int iSize = 0, iNo = 0;

    printf("Enter the size of array: ");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the Elements: ");

    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &iNo);

    bRet = Cheak(p, iSize, iNo);

    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    return 0;

}