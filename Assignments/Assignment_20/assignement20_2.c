/*2. Accept Character from user and check whether it is capital or not
(A-Z).
Input :
F
Output : TRUE
Input :
d
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkCapital(char c)
{
    if(c>='A' && c<='Z')
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

    bRet = ChkCapital(ch);

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