// Source : https://oj.leetcode.com/problems/string-to-integer-atoi/
// Author : Bin bin
// Date   : 2015-11-2	Learn from Hao Chen

/********************************************************************************** 
* 
* Implement atoi to convert a string to an integer.
* 
* Hint: Carefully consider all possible input cases. If you want a challenge, 
*       please do not see below and ask yourself what are the possible input cases.
* 
* Notes: 
*   It is intended for this problem to be specified vaguely (ie, no given input specs). 
*   You are responsible to gather all the input requirements up front. 
* 
* 
* Requirements for atoi:
* 
* The function first discards as many whitespace characters as necessary until the first 
* non-whitespace character is found. Then, starting from this character, takes an optional 
* initial plus or minus sign followed by as many numerical digits as possible, and interprets 
* them as a numerical value.
* 
* The string can contain additional characters after those that form the integral number, 
* which are ignored and have no effect on the behavior of this function.
* 
* If the first sequence of non-whitespace characters in str is not a valid integral number, 
* or if no such sequence exists because either str is empty or it contains only whitespace 
* characters, no conversion is performed.
* 
* If no valid conversion could be performed, a zero value is returned. If the correct value 
* is out of the range of representable values, INT_MAX (2147483647) or INT_MIN (-2147483648) 
* is returned.
*  8ms             
**********************************************************************************/

#define MIN     (-2147483647 - 1)
#define MAX      2147483647
class Solution 
{
public:
    int myAtoi(string str) 
	{
		int n=str.length();
		if(n==0||str[0]=='\0')
			return 0;
		int i=0;
		for(;i<n&&isspace(str[i]); i++)
			;
    
		bool neg=false;
		if (i<n && (str[i]=='-' || str[i]=='+') )
		{
			neg = (str[i]=='-') ;
			i++;
		}
		
		int ret=0;
		for(; isdigit(str[i]); i++) 
		{
			int digit = (str[i]-'0');
			if(neg)
			{
				if( -ret < (MIN + digit)/10 )
				{
					return MIN;
				}
			}else
			{
				if( ret > (MAX - digit) /10 ) 
				{
					return MAX;
				}
			}

			ret = 10*ret + digit ;
		}
    
		return neg?-ret:ret;
      
	}
};