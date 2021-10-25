package MarvellousArray;

import java.util.*;

public class ArrayX
{
	public int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		int iCnt = 0;

		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter elements: ");

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt = 0;

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	} 
}