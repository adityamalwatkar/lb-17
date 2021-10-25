/*2. Write Java program which accept String from user and display
below pattern.
Input : Hello
output: H e l l o
		H e l l 
		H e l
		H e 
		H

*/

import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		int i = 0, j = 0, iCol = str.length();
		char Arr[] = str.toCharArray();

		for(i = 0; i<iCol; i++)
		{
			for(j = 0; j<(iCol - i); j++)
			{
				 System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
	}
}

class Assignment38_2
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


