/*1. Write Java program which accept String from user and display
below pattern.
Input : Hello
output: H e l l o
		H e l l o
		H e l l o
		H e l l o

*/

import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		int i = 0, j = 0, iCnt = str.length();
		char Arr[] = str.toCharArray();

		for(i = 0; i<(iCnt-1); i++)
		{
			for(j = 0; j<iCnt; j++)
			{
				 System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
	}
}

class Assignment38_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		String str;
		
		System.out.println("Enter the String: ");
		str = sobj.nextLine();

		Pattern pobj = new Pattern();
		pobj.Pattern(str);
	}
}


