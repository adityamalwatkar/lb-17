/*2. Write Java program which accept N numbers from user and display
all such elements which are divisible by 5.*/


import java.util.*;
import MarvellousArray.ArrayX;

class ArryDemo extends ArrayX
{
	public ArryDemo(int iSize)
	{
		super(iSize);
	}

	public void Divisible()
	{
		int iCnt = 0;

		System.out.println("The elements which are divisible by 5 is :");

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(Arr[iCnt] % 5 == 0)
			{
				System.out.print(Arr[iCnt]+" ");
			}
		}

		System.out.println();
	}
}

class Assignment32_2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iLength = 0, iDiffernce = 0;

		System.out.println("Enter the size of Array: ");
		iLength = sobj.nextInt();

		ArryDemo aobj = new ArryDemo(iLength);

		aobj.Accept();
		aobj.Divisible();

	}
}