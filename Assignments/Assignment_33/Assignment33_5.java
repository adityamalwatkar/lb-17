/*5.Write a program which accept number from user and return
difference between summation of even digits and summation of odd
digits.
Input : 2395
Output : -15 (2 - 17)
*/

import java.util.*;

class Digit
{
	public int CountDiff(int iValue)
	{
		int iDig = 0, iSumEven = 0, iSumOdd = 0;

		if(iValue < 0)
		{
			iValue = -iValue;
		}

		while(iValue != 0)
		{
			iDig = iValue % 10;

			if(iDig % 2 == 0)
			{
				iSumEven = iSumEven + iDig;
			}

			else if( iDig % 2 != 0)
			{
				iSumOdd = iSumOdd + iDig;
			}

			iValue = iValue/10;
		}

		return iSumEven - iSumOdd;
	}
}

class Assignment33_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNo = 0, iRet = 0;

		System.out.println("Enter the number: ");
		iNo = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.CountDiff(iNo);

		System.out.println("Differnce is: "+iRet);
	}
}