// Source : https://oj.leetcode.com/problems/palindrome-number/
// Author : bin bin
// Date   : 2015-07-31

/********************************************************************************** 
* 
* Determine whether an integer is a palindrome. Do this without extra space.
* 
* 
* Some hints:
* 
* Could negative integers be palindromes? (ie, -1)
* 
* If you are thinking of converting the integer to string, note the restriction of using extra space.
* 
* You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", 
* you know that the reversed integer might overflow. How would you handle such case?
* 
* There is a more generic way of solving this problem.
* 76 ms
*               
**********************************************************************************/

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
		{
			return false;
		}else if(x==0)
		{
		    return true;
		}
		//将x的各个位放入数组中
		char a[256];
		int m=0,n=0;
		while(x)
		{
			a[n++]=x%10+'0';
			x/=10;
		}
		while(m<=n/2)
		{
			if(a[m]!=a[n-m-1])
				return false;
			m++;
		}
		return true;
		    
    }
};