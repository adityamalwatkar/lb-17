// Write a program which accept string from user and convert it into lower case.
#include <stdio.h>

void strlwrX(char *);

int main(int argc, char const *argv[])
{
    char string[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", string);

    strlwrX(string);

    return 0;
}

void strlwrX(char string[])
{
    while (*string != '\0')
    {
        if (*string >= 'A' && *string <= 'Z')
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