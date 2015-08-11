// Source : https://oj.leetcode.com/problems/valid-parentheses/
// Author : Bin bin
// Date   : 2015-08-10

/********************************************************************************** 
* 
* Given a string containing just the characters '(', ')', '{', '}', '[' and ']', 
* determine if the input string is valid.
* 
* The brackets must close in the correct order, "()" and "()[]{}" are all valid 
* but "(]" and "([)]" are not.
* 
* 0ms              
**********************************************************************************/

class Solution 
{
public:
   	bool isValid(string s)
	{
		if(s.length()%2==1)
		{
			return false;
		}
		map<char,int> m;
		m['(']=0;
		m['[']=1;
		m['{']=2;
		m['}']=3;
		m[']']=4;
		m[')']=5;
		char stack[256];
		memset(stack,'0',sizeof(stack));
		int top=-1;
		int i=-1;
		while(++i<s.length())
		{
			if(top==-1)
			{
				stack[++top]=s[i];
			}else if(m[stack[top]]+m[s[i]]==5&& m[stack[top]]< m[s[i]])
 			{
				top--;
			}else 
			{
				stack[++top]=s[i];	
			}
		}
		if(top==-1)
		{
			return true;
		}else
		{
			return false;
		}
	}
};