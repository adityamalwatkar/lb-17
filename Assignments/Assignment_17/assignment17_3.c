/*3. Accept N numbers from user check whether that numbers contains 11 in it or not.*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Cheak(int Arr[], int iLength)
{
    bool bAns = false;
    for(int i = 0; i<iLength; i++)
    {
        if(Arr[i] == 11)
        {
            bAns = true;
        }
    }
    return bAns;
}

int main()
{
    int *p = NULL;
    bool iRet = false; 
    int iSize = 0;

    printf("Enter the size of Array:");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    printf("Enter %d elemets: ",iSize);

    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &p[i]);
    }

    iRet = Cheak(p, iSize);

    if(iRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);

    return 0;
}