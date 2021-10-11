/*4. Accept Character from user and check whether it is small case or
not (a-z).
Input :
g
Output : TRUE
Input :
D
Output : FALSE
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkSmall(char c)
{
    if(c>='a' && c<='z')
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

    bRet = ChkSmall(ch);

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