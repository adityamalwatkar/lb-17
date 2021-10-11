/*4. Accept N numbers from user and accept Range, Display all elements from that range*/

#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i]>iStart && Arr[i]<iEnd)
        {
            printf("%d\t", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int *p = NULL;
    int iRet = 0;
    int iSize = 0, iNo1 = 0, iNo2 = 0;

    printf("Enter the size of array: ");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the Elements: ");

    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &p[i]);
    }
   printf("Enter the starting point: \n");
   scanf("%d", &iNo1);
    
    printf("Enter the Ending point: \n");
    scanf("%d", &iNo2);

    Range(p, iSize, iNo1, iNo2);

    free(p);

    return 0;

}