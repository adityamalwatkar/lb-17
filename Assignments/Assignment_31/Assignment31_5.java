/*5. Write a java program which accept string from user and display
it in reverse order.*/

import java.util.*;

class StringDemo
{
	public void Reverse(String str)
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0;

		for(iCnt = Arr.length-1; iCnt >= 0; iCnt--)
		{
			System.out.print(Arr[iCnt]);
		}

		System.out.println();
	}
}

class Assignment31_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string: ");
		String s = sobj.nextLine();

		StringDemo sobj1 = new StringDemo();
		sobj1.Reverse(s);
	}
}