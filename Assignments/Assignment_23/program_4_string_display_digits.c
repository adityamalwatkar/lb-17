// Write a program which accept string from user and display only digits from that string.
#include <stdio.h>

void displayDigits(char *);

int main(int argc, char const *argv[])
{
    char string[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", string);

    displayDigits(string);

    return 0;
}

void displayDigits(char string[])
{
    while (*string != '\0')
    {
        if (*string >= '0' && *string <= '9')
        {
            printf("%c", *string);
        }
        string++;
    }
    printf("\n");
}