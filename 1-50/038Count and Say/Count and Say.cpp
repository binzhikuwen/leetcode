// Source : https://oj.leetcode.com/problems/count-and-say/
// Author : Bin bin
// Date   : 2015-09-01

/********************************************************************************** 
* 
* The count-and-say sequence is the sequence of integers beginning as follows:
* 1, 11, 21, 1211, 111221, ...
* 
* 1 is read off as "one 1" or 11.
* 11 is read off as "two 1s" or 21.
* 21 is read off as "one 2, then one 1" or 1211.
* 
* Given an integer n, generate the nth sequence.
* 
* Note: The sequence of integers will be represented as a string.
* 0ms
*               
**********************************************************************************/
class Solution 
{
public:
    string countAndSay(int n) 
	{
        string result,temp;
		result="10";
		for(int i=1;i<n;i++)
		{
			int n=1;
			temp="";
			for(int j=0;j<result.length()-1;j++)
			{
				if(result[j]==result[j+1])
				{
					n++;
					continue;
				}
				temp+=(n+'0');
				temp+=(result[j]);
				n=1;
			}
			result=temp;
			result+='0';
		}
		result.erase(result.end()-1);
		return result;
    }
};