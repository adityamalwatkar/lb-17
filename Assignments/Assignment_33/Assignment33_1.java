/*1.Write a java program which accept number from user and return the
count of even digits.*/

import java.util.*;

class Digit
{
	public int CountEven(int iValue)
	{
		int iCntEven = 0, iDig = 0;

		if(iValue < 0)
		{
			iValue = -iValue;
		}

		while(iValue != 0)
		{
			iDig = iValue % 10;

			if(iDig % 2 == 0)
			{
				iCntEven++;
			}
			iValue = iValue/10;
		}

		return iCntEven;
	}
}

class Assignment33_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNo = 0, iRet = 0;

		System.out.println("Enter number: ");
		iNo = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.CountEven(iNo);

		System.out.println("Count of even digit: "+iRet);
	}
}

