// Write a program which accept string from user and count number of white spaces.
#include <stdio.h>

int countSpaces(char *);

int main(int argc, char const *argv[])
{
    char string[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", string);

    iRet = countSpaces(string);
    printf("The number of spaces in the given string: %d\n", iRet);

    return 0;
}

int countSpaces(char string[])
{
    int iCnt = 0;

    while (*string != '\0')
    {
        if (*string == 32)
        {
            iCnt++;
        }
        string++;
    }
    
    return iCnt;
}