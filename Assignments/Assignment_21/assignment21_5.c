/*5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.*/

#include<stdio.h>

void Display(char c)
{
    printf("Decimal: %d\n", c);
    printf("Octal: %o\n", c);
    printf("Hexadecimal: %x\n", c);
}

int main()
{
    char ch = '\0';

    printf("Enter the value: ");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}