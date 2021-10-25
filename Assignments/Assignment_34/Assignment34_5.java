/*5. Write java program which accept N numbers from user and return
product of all odd elements.*/

import java.util.*;
import MarvellousArray.ArrayX;

class Marvellous extends ArrayX
{
	public Marvellous(int iSize)
	{
		super(iSize);
	}

	public int OddProduct()
	{
		int iCnt = 0, iMulti = 1;

		for(iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			if(Arr[iCnt] % 2 != 0)
			{
				iMulti = iMulti * Arr[iCnt];
			}
		}

		return iMulti;
	}
}

class Assignment34_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0, iRet = 0;

		System.out.println("Enter the size of array: ");
		iLength = sobj.nextInt();

		Marvellous mobj = new Marvellous(iLength);

		mobj.Accept();
		iRet = mobj.OddProduct();

		System.out.println("Multiplication of odd elements is: "+iRet);
	}
}