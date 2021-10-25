/*2.Write a program which accept number from user and return the
count of odd digits.
Input :
Output : 2395
3
Input :
Output : 1018
2
*/

import java.util.*;

class Digit
{
	public int CountOdd(int iValue)
	{
		int iDig = 0, iCnt = 0;

		if(iValue < 0)
		{
			iValue = -iValue;
		}

		while(iValue != 0)
		{
			iDig = iValue % 10;

			if(iDig % 2 != 0)
			{
				iCnt++;
			}

			iValue = iValue/10;
		}

		return iCnt;
	}
}

class Assignment33_2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNo = 0, iRet = 0;

		System.out.println("Enter the number: ");
		iNo = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.CountOdd(iNo);

		System.out.println("Count of odd digits is: "+iRet);
	}
}