/*4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input :
%
Output : TRUE
Input :
d
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char c)
{
    if(c == '!' || c == '@'|| c == '#'|| c == '$'|| c == '%'|| c == '^'|| c == '&'|| c == '*')
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

    bRet = ChkSpecial(ch);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}