// Source : https://oj.leetcode.com/problems/implement-strstr/
// Author : Bin bin
// Date   : 2015-09-01

/********************************************************************************** 
* 
* Implement strStr().
* 
* Returns a pointer to the first occurrence of needle in haystack, or null if needle is not part of haystack.
* 
*               
**********************************************************************************/
class Solution 
{
public:
    int strStr(string haystack, string needle) 
	{
        int result=-1;
		if(needle.length()>haystack.length())
            return result;
    
        if(needle=="")
            return 0;
		
		for(int i=0;i<haystack.length()-needle.length()+1;i++)
		{
			if(haystack[i]==needle[0])
			{
				int j=1;
				for(;j<needle.length();j++)
				{
					if(haystack[i+j]!=needle[j])
					{
						break;
					}
				}
				if(j==needle.length())
				{
					result=i;
					return result;
				}
			}
		}
		return result;
    }
};