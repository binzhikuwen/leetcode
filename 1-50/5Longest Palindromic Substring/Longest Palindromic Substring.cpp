// Source : https://oj.leetcode.com/problems/longest-palindromic-substring/
// Author : Bin bin
// Date   : 2015-08-06

/********************************************************************************** 
* 
* Given a string S, find the longest palindromic substring in S. 
* You may assume that the maximum length of S is 1000, 
* and there exists one unique longest palindromic substring.
* 96 ms              
**********************************************************************************/


class Solution
{
public:
   string longestPalindrome(string s) 
    {
        string result;
		int max=0;
		int left=0;
		for(size_t i=0;i<s.length();i++)
		{
			for(int j=0;i-j>=0&&i+j<s.length();j++)
			{
				if(s[i-j]!=s[i+j])
				{
					break;
				}
				if(max<2*j+1)
				{
					max=2*j+1;
					left=i-j;
				}
			}
			for(int j=0;i-j>=0&&i+j+1<s.length();j++)
			{
				if(s[i-j]!=s[i+j+1])
				{
					break;
				}
				if(max<2*j+2)
				{
					max=2*j+2;
					left=i-j;
				}
			}
		}
		result=s.substr(left,max);
		return result;
    }
};
};