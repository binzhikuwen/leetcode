// Source : https://oj.leetcode.com/problems/roman-to-integer/
// Author : Bin bin
// Date   : 2015-09-2

/********************************************************************************** 
* 
* Given a roman numeral, convert it to an integer.
* 
* Input is guaranteed to be within the range from 1 to 3999.
* 36ms             
**********************************************************************************/

class Solution 
{
public:
	int romanToInt(string s) 
	{  
        if(s.length() < 1) 
			return 0;  
        int result = 0;  
        int cur = getRomanValue(s[0]);   
		int tmp=cur;
        for(int i = 1 ; i < s.length(); ++i) 
		{  
            int next = getRomanValue(s[i]);  
            if(cur == next) 
			{
				tmp+=next;
			} 
            else if( cur < next) 
			{  
                tmp=next-tmp;   
            } else 
			{  
                result+=tmp;
				tmp=next;
            }
			cur=next;
        }  
		result+=tmp;
        return result;  
    }  
    int getRomanValue(char c) 
	{
        switch(c) 
		{  
            case 'I': 
				return 1;   
            case 'V': 
				return 5;  
            case 'X':
				return 10;  
            case 'L':
				return 50;  
            case 'C':
				return 100;  
            case 'D':
				return 500;  
            case 'M':
				return 1000;  
            default: 
				return 0;  
        }  
    }  
};