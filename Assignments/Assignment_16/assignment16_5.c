/*
Enter the size of Array: 6
Enter 6 elements: 
Enter 1 element: 85
Enter 2 element: 66
Enter 3 element: 3
Enter 4 element: 55
Enter 5 element: 93
Enter 6 element: 88
66      55      88 
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int arr[], int iLength)
{
    for(int i = 0; i<iLength; i++)
    {
        if(arr[i]% 11 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int *p = NULL;
    int size = 0;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    p = (int *)malloc(sizeof(int)*size);

    printf("Enter %d elements: \n", size);

    for(int i = 0; i<size; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &p[i]);
    }

    Display(p, size);

    free(p);

    return 0;
}