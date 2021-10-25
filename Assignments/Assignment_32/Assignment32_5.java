/*5. Write Java program which accept N numbers from user and display
all such elements which are multiples of 11.*/

import java.util.*;
import MarvellousArray.ArrayX;

class ArryDemo extends ArrayX
{
	public ArryDemo(int iSize)
	{
		super(iSize);
	}

	public void DisplayElement()
	{
		int iCnt = 0;

		System.out.println("The elements are:");

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(Arr[iCnt]%11 == 0)
			{
				System.out.print(Arr[iCnt]+" ");
			}
		}

		System.out.println();
	}
}

class Assignment32_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iLength = 0;

		System.out.println("Enter the size of Array: ");
		iLength = sobj.nextInt();

		ArryDemo aobj = new ArryDemo(iLength);

		aobj.Accept();
		aobj.DisplayElement();

	}
}