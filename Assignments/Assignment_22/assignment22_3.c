/*3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6
(8-2)
*/

#include<stdio.h>

int Difference(char *brr)
{
    int iCntSmall = 0, iCntCapital = 0;

    while(*brr != '\0')
    {
        if((*brr>='A')&&(*brr<='Z'))
        {
            iCntCapital++;
        }

        if((*brr >= 'a') && (*brr <= 'z'))
		{
			iCntSmall++;
		}
        brr++;
    }
    return iCntSmall-iCntCapital;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}