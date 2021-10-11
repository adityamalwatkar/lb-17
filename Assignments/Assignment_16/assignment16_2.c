#include<stdio.h>
#include<stdlib.h>

void Display(int arr[], int iLength)
{
    for(int i = 0; i<iLength; i++)
    {
        if(arr[i]%5 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int size = 0, iRet = 0;
    int *p = NULL;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements: \n");

    p = (int *)malloc(sizeof(int)*size);

    for(int i = 0; i<size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &p[i]);
    }

    Display(p, size);

    free(p);

    return 0;
}