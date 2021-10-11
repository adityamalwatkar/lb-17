/*3. Accept Character from user and check whether it is digit or not
(0-9).
Input :
7
Output : TRUE
Input :
d
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkDigit(char c)
{
    if(c>='0' && c<='9')
    {
        return true;
    }

    return false;
}

int main()
{
    char ch = '0';
    bool bRet = false;

    printf("Enter the value: ");
    scanf("%c", &ch);

    bRet = ChkDigit(ch);

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