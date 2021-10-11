/*3. Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input :
Q
Output : Q
Input :
S T U V W X Y Z
l k j i h g f e d
m
Output : m
Input :R 
c
b
a
8
Output :
*/
#include<stdio.h>

void Display(char c)
{
    if(c>='A' && c<='Z')
    {
        for(char i = c; i<='Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if(c>='a' && c<='z')
    {
        for(char i = c; i<='z'; i++)
        {
            printf("%c\t", i);
        }
    }

    printf("\n");
}

int main()
{
    char ch = '\0';

    printf("Enter the value: ");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}