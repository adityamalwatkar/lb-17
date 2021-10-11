/*3.  Accept  N  numbers  from  user  and  accept  one  another  number  as  NO  , return index of last occurrence of that NO.*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;
    for(i = iLength-1; i>0; i--)
    {
        if(Arr[i] == iNo)
        {
            break;
        }
    }
    if(i == iLength)
    {
        return -1;
    }
    else{
        return i;
    }
    
}

int main()
{
    int *p = NULL;
    int iRet = 0;
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

    iRet = LastOcc(p, iSize, iNo);

    printf("Last occurance of  the number is : %d\n", iRet);

    free(p);

    return 0;

}