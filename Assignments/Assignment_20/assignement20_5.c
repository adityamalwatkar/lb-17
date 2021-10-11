/*5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input :
C
Output : Your exam at 9.20 AM
Input :
d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>

void DisplaySchedule(char c)
{
    if(c == 'A'|| c == 'B' || c == 'C' || c == 'D')
    {
        if(c == 'A')
        {
            printf("Your exam at 7 AM\n");
        }
        else if(c == 'B')
        {
            printf("Your exam at 8.30 AM\n");
        }
        else if(c == 'C')
        {
            printf("Your exam at 9.20 AM\n");
        }
        else if(c == 'D')
        {
            printf("Your exam at 10.30 AM\n");
        }

        
    }
    else
        {
            printf("Please enter approproate Division\n");
        }
}

int main()
{
    char ch = '\0';

    printf("Enter the Division: ");
    scanf("%c", &ch);

    DisplaySchedule(ch);

    return 0;
}