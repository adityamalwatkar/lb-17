#include<stdio.h>
#include<stdlib.h>

void Display(int arr[], int iLength)
{
    for(int i = 0; i<iLength; i++)
    {
        if(arr[i] % 2 == 0 && arr[i] % 5 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int size = 0;
    int *p = NULL;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    p = (int *)malloc(sizeof(int)*size);

    printf("Enter the %d elemensts: \n", size);

    for(int i = 0; i<size; i++)
    {
        printf("Enter %d element: \n", i+1);
        scanf("%d", &p[i]);
    }

    Display(p, size);

    free(p);

    return 0;
}