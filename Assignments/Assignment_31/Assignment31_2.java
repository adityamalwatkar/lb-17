/*1.Write a Java program which accept string from user and count
number of small characters.*/

import java.util.*;

class StringDemo
{
	public int CountSmall(String str)
	{
		int iCount = 0, iCnt = 0;
		char Arr[] = str.toCharArray();

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
			{
				iCount++;
			}
		}

		return iCount;
	}
}

class Assignment31_2
{
	public static void main(String arg[])
	{
		int iRet = 0;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string: ");
		String s = sobj.nextLine();

		StringDemo sobj1 = new StringDemo();
		iRet = sobj1.CountSmall(s);

		System.out.println("The count of small letter is: "+iRet);
	}
}