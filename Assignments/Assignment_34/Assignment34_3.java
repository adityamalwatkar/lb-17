/*3. Write java program which accept N numbers from user and accept
one another number as NO , return index of last occurrence of that NO.*/

import java.util.*;
import MarvellousArray.ArrayX;


class Marvellous extends ArrayX
{
	public Marvellous(int iSize)
	{
		super(iSize);
	}

	public int LastOcc(int iNo)
	{
		int iCnt = 0, iIndex = -1;

		for(iCnt = (Arr.length-1); iCnt>=0; iCnt--)
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

class Assignment34_3
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
		iRet = mobj.LastOcc(iValue);

		System.out.println("Last occirance is: "+iRet);
	}
}