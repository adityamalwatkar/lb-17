/*1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input :
F
Output : TRUE
Input :
&
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkAlpha(char c)
{
    if(c>'a' && c<'z' || c>'A' && c<'Z')
    {
        return true;
    }

    return false;
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the value: ");
    scanf("%c", &ch);

    bRet = ChkAlpha(ch);

    if(bRet == true)
    {
        printf("TRUE\n");;   
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}