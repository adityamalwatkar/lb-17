/*2. Write Java program which accept number of rows and number of
columns from user and display below pattern.

Input : iRow = 4  iCol = 3

output: 1 2 3
		1 2 3
		1 2 3 
*/

import java.util.*;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i = 0, j = 0;

		for(i = 1; i<=iRow; i++)
		{
			for(j = 1; j<=iCol; j++)
			{
				System.out.print(j+" ");
			}
			System.out.println();
		}
	}
}

class Assignment37_2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iValue1 = 0, iValue2 = 0;

		System.out.println("Enter the number of rows: ");
		iValue1 = sobj.nextInt();

		System.out.println("Enter the number of columns: ");
		iValue2 = sobj.nextInt();

		Pattern pobj = new Pattern();
		pobj.Pattern(iValue1, iValue2);
	}
}


