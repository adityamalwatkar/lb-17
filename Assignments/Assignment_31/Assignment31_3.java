/*3. Write a java program which accept string from user and return
difference between frequency of small characters and frequency
of capital characters.*/

import java.util.*;

class StringDemo
{
	public int CountDiff(String str)
	{
		int iCountSmall = 0, iCountCapital = 0, iCnt = 0;
		char Arr[] = str.toCharArray();

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
			{
				iCountSmall++;
			}

			else if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'z')
			{
				iCountCapital++;
			}
		}

		return (iCountSmall - iCountCapital);
	}
}

class Assignment31_3
{
	public static void main(String arg[])
	{
		int iRet = 0;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string: ");
		String s = sobj.nextLine();

		StringDemo sobj1 = new StringDemo();
		iRet = sobj1.CountDiff(s);

		System.out.println("The difference is: "+iRet);
	}
}