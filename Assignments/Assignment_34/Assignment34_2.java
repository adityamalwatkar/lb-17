/*2. Write java program which accept N numbers from user and accept
one another number as NO , return index of first occurrence of that
NO.*/

import java.util.*;
import MarvellousArray.ArrayX;

class Marvellous extends ArrayX
{
	public Marvellous(int iSize)
	{
		super(iSize);
	}

	public int FirstOcc(int iNo)
	{
		int iCnt = 0, iIndex = -1;

		for(iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				iIndex = iCnt;
				break;
			}
		}

		return iIndex;
	}
}

class Assignment34_2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0, iValue = 0, iRet = 0;

		System.out.println("Enter the size of array: ");
		iLength = sobj.nextInt();

		Marvellous mobj = new Marvellous(iLength);

		System.out.println("Enter the number: ");
		iValue = sobj.nextInt();

		mobj.Accept();
		iRet = mobj.FirstOcc(iValue);

		System.out.println("First occirance is: "+iRet);
	}
}