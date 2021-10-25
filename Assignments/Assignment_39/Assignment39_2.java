/*
Enter the String: 
Hello
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
				 if(i+j<iCol-1)
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

class Assignment39_2
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


