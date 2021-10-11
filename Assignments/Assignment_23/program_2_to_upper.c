// Write a program which accept string from user and convert it into upper case.
#include <stdio.h>

void struprX(char *);

int main(int argc, char const *argv[])
{
    char string[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", string);

    struprX(string);

    return 0;
}

void struprX(char string[])
{
    while (*string != '\0')
    {
        if (*string >= 'a' && *string <= 'z')
        {
            printf("%c", *string - 32);
        }
        else
        {
            printf("%c", *string);
        }
        string++;    
    }
    printf("\n");
}