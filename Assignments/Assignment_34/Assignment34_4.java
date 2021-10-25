/*4. Write java program which accept N numbers from user and accept
Range, Display all elements from that range*/

import java.util.*;
import MarvellousArray.ArrayX;


class Marvellous extends ArrayX
{
	public Marvellous(int iSize)
	{
		super(iSize);
	}

	public void Display(int iStart, int iEnd)
	{
		int iCnt = 0;

		System.out.println("Elements which are inside the given range are : ");
		
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
			{
				System.out.println(Arr[iCnt]);
			}
		}	 
	}
}

class Assignment34_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0, iValue1 = 0, iValue2 = 0;

		System.out.println("Enter the size of array: ");
		iLength = sobj.nextInt();

		Marvellous mobj = new Marvellous(iLength);

		System.out.println("Enter starting range: ");
		iValue1 = sobj.nextInt();

		System.out.println("Enter Ending range: ");
		iValue2 = sobj.nextInt();


		mobj.Accept();
		mobj.Display(iValue1, iValue2);
	}
}