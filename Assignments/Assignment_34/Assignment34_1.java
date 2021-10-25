/*1. Write java program which accept N numbers from user and accept
one another number as NO , check whether NO is present or not.*/

import MarvellousArray.ArrayX;
import java.util.*;

class Marvellous extends ArrayX
{
	public Marvellous(int iSize)
	{
		super(iSize);
	}

	boolean Cheak(int iNo)
	{
		int iCnt = 0;
		boolean bFlag = false;

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				bFlag = true;
				break;
			}
		}

		return bFlag;
	}
}

class Assignment34_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0, iValue = 0;
		boolean bRet = false;

		System.out.println("Enter the size of array: ");
		iLength = sobj.nextInt();

		System.out.println("Enter the number: ");
		iValue = sobj.nextInt();

		Marvellous mobj = new Marvellous(iLength);

		mobj.Accept();
		bRet = mobj.Cheak(iValue);

		if(bRet == true)
		{
			System.out.println("TRUE");
		}

		else
		{
			System.out.println("FALSE");
		}
	}
}