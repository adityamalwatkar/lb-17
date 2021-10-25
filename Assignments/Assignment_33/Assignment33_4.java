/*4.Write a program which accept number from user and return
multiplication of all digits.*/

import java.util.*;

class Digit
{
	public int Multiply(int iValue)
	{
		int iDig = 0, iMulti = 1;

		if(iValue < 0)
		{
			iValue = -iValue;
		}

		while(iValue != 0)
		{
			iDig = iValue % 10;

			if(iDig == 0)
			{
				iDig = 1;
			}

			iMulti = iMulti * iDig;

			iValue = iValue/10;
		}

		return iMulti;
	}
}

class Assignment33_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNo = 0, iRet = 0;

		System.out.println("Enter the number: ");
		iNo = sobj.nextInt();

		Digit dobj = new Digit();

		iRet = dobj.Multiply(iNo);

		System.out.println("Multiplication of all digits is: "+iRet);
	}
}