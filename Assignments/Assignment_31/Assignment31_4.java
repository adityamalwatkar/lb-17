/*4. Write a java program which accept string from user and check
whether it contains vowels in it or not.*/

import java.util.*;

class StringDemo
{
	public boolean ChkVowels(String str)
	{
		int iCnt = 0;
		char Arr[] = str.toCharArray();
		boolean bAns = false;

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(Arr[iCnt] == 'a'|| Arr[iCnt] == 'e'||Arr[iCnt] == 'i'||Arr[iCnt] == 'o'||Arr[iCnt] == 'u'||Arr[iCnt] == 'A'||Arr[iCnt] == 'E'||Arr[iCnt] == 'I'||Arr[iCnt] == 'O'||Arr[iCnt] == 'U' )
			{
				bAns = true;
				break;
			}
		}

		return bAns;
	}
}

class Assignment31_4
{
	public static void main(String arg[])
	{
		boolean bRet = false;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string: ");
		String s = sobj.nextLine();

		StringDemo sobj1 = new StringDemo();
		bRet = sobj1.ChkVowels(s);

		if(bRet == true)
		{
			System.out.println("Vowels are present");
		}

		else
		{
			System.out.println("Vowels are not present");
		}
	}
}