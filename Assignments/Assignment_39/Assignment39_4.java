/*Enter the String: 
hello
h e l l o 
h e l l * 
h e l * * 
h e * * * 
h * * * * 
h e * * * 
h e l * * 
h e l l * 
h e l l o 
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

		for(i = 0; i<iCol; i++)
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
	}
}

class Assignment39_4
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


