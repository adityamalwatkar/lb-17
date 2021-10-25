/*3.Write a program which accept number from user and return the
count of digits in between 3 and 7.
Input : 2395
Output : 1

Input : 1018
Output : 0
*/

import java.util.*;

class Digit
{
	public int CountRange(int iValue)
	{
		int iDig = 0, iCnt = 0;

		if(iValue < 0)
		{
			iValue = -iValue;
		}

		while(iValue != 0)
		{
			iDig = iValue % 10;

			if(iDig > 3 && iDig < 7)
			{
				iCnt++;
			}

			iValue = iValue/10;
		}

		return iCnt;
	}
}

class Assignment33_3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNo = 0, iRet = 0;

		System.out.println("Enter the number: ");
		iNo = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.CountRange(iNo);

		System.out.println("Count of digits in between 3 and 7 is: "+iRet);
	}
}