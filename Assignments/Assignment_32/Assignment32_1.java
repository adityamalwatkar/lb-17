/*1. Write Java program which accept N numbers from user and return
difference between summation of even elements and summation of
odd elements.*/

import java.util.*;
import MarvellousArray.ArrayX;

class ArryDemo extends ArrayX
{
	public ArryDemo(int iSize)
	{
		super(iSize);
	}

	public int Difference()
	{
		int iCnt = 0, iSumEven = 0, iSumOdd = 0;

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(Arr[iCnt] % 2 == 0)
			{
				iSumEven = iSumEven + Arr[iCnt];
			}
			else if(Arr[iCnt] % 2 != 0)
			{
				iSumOdd = iSumOdd + Arr[iCnt];
			}
		}

		return iSumEven - iSumOdd;
	}
}

class Assignment32_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iLength = 0, iDiffernce = 0;

		System.out.println("Enter the size of Array: ");
		iLength = sobj.nextInt();

		ArryDemo aobj = new ArryDemo(iLength);

		aobj.Accept();
		iDiffernce = aobj.Difference();

		System.out.println("The Difference is: "+iDiffernce);
	}
}