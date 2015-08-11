// Source : https://oj.leetcode.com/problems/reverse-integer/
// Author : bin bin
// Date   : 2015-07-31

/********************************************************************************** 
* 
* Reverse digits of an integer.
* 
* Example1: x =  123, return  321
* Example2: x = -123, return -321
* 
* 
* Have you thought about this?
* 
* Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!
* 
* > If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.
* 
* > Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, 
*   then the reverse of 1000000003 overflows. How should you handle such cases?
* 
* > Throw an exception? Good, but what if throwing an exception is not an option? 
*   You would then have to re-design the function (ie, add an extra parameter).
*  8 ms
*               
**********************************************************************************/
class Solution
{
public:
     int reverse(int x) 
	{
        int result = 0;
		int y=0;
		if(x==-2147483648)
		{
			return 0;
		}else if(x>0)
		{
			y=x;
		}else
		{
		    y=-x;
		}
		while(y)
		{
			if(result>214748364 || (result==214748364 && y%10>7))
				return 0;
			result = result*10 + y%10;
			y/=10;
		}
		if(x<0)
			return -result;
		else
			return result;
			
    }
};