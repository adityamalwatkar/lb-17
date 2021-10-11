// Write a program which accept string from user and toggle the case.
#include <stdio.h>

void strtoggleX(char *);

int main(int argc, char const *argv[])
{
    char string[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", string);

    strtoggleX(string);

    return 0;
}

void strtoggleX(char string[])
{
    while (*string != '\0')
    {
        if (*string >= 'a' && *string <= 'z')
        {
            printf("%c", *string - 32);
        }
        else if (*string >= 'A' && *string <= 'Z')
        {
            printf("%c", *string + 32);
        }
        else
        {
            printf("%c", *string);
        }
        string++;    
    }
    printf("\n");
}