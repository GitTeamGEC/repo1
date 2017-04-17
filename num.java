import java.util.*;
import java.util.Scanner;
class num
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the no.");
		int n = in.nextInt();
		if(n%2==0)
		{
		System.out.println("the no. is even");
		}
		else
		{
		System.out.println("the no. is odd");
		}
	}
}
