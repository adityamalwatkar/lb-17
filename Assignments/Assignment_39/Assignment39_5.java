/*Enter the String: 
Hello
H * * * * 
H e * * * 
H e l * * 
H e l l * 
H e l l o 
H e l l * 
H e l * * 
H e * * * 
H * * * * 
*/

import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		int i = 0, j = 0, iCol = str.length();
		char Arr[] = str.toCharArray();

		for(i = 0; i<iCol-1; i++)
		{
			for(j = 0; j<=(iCol-1); j++)
			{
				 if(i<j)
				 {
				 	System.out.print("* ");
				 }
				 else
				 {
				 	System.out.print(Arr[j]+" ");
				 }
			}
			System.out.println();
		}

		for(i = 0; i<iCol; i++)
		{
			for(j = 0; j<=(iCol-1); j++)
			{
				 if(i+j<iCol)
				 {
				 	System.out.print(Arr[j]+" ");
				 }
				 else
				 {
				 	System.out.print("* ");
				 }
			}
			System.out.println();
		}

	}
}

class Assignment39_5
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


