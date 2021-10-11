/*2. Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input :
Q
Output : q
Input :
m
Output : M
Input :
4
Output : 4
Input :
%
Output : %
*/

#include<stdio.h>

char Display(char c)
{
    if(c>='a' && c<='z')
    {
        return c-32;
    }
    else if((c>='A') && (c<='Z'))
    {
        return c + 32;
    }
    else{

        return c;
    }
}

int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter the value: ");
    scanf("%c", &ch);

    cRet = Display(ch);

    printf("%c\n", cRet);

    return 0;
}